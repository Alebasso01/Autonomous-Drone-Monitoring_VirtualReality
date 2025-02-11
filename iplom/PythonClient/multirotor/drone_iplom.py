import setup_path
import airsim
import time
import numpy as np
import os
import tempfile
import pprint
import cv2
import math
import statistics
import sys
import argparse
import csv

# Funzione per convertire le coordinate geografiche in coordinate locali
def geodetic_to_enu(lat, lon, alt, lat_ref, lon_ref, alt_ref):
    earth_radius = 6378137.0
    lat = math.radians(lat)
    lon = math.radians(lon)
    lat_ref = math.radians(lat_ref)
    lon_ref = math.radians(lon_ref)

    d_lat = lat - lat_ref
    d_lon = lon - lon_ref

    x = earth_radius * d_lon * math.cos(lat_ref)
    y = earth_radius * d_lat
    z = -alt_ref

    return x, y, z

class AirSimDrone:
    def __init__(self):
        self.scale = 1
        self.default_alt = 0  # Default altitude for inclination monitoring
        self.alt_leakage_detection = 40  # Altitude for leakage detection
        self.points = [
            {"name": "Take off", "lat": 44.582235, "lon": 8.941580, "alt": self.default_alt},
            {"name": "Tank 1", "lat": 44.582400, "lon": 8.941140, "alt": self.default_alt},
            {"name": "Tank 2", "lat": 44.583000, "lon": 8.941150, "alt": self.default_alt},
            {"name": "Tank 3", "lat": 44.583435, "lon": 8.941107, "alt": self.default_alt},
            {"name": "Tank 4", "lat": 44.584000, "lon": 8.941150, "alt": self.default_alt-5},
            {"name": "Tank 5", "lat": 44.58450, "lon": 8.941150, "alt": self.default_alt},
            #{"name": "LANDING", "lat": 44.582218, "lon": 8.941591, "alt": self.default_alt},
        ]
        
        # Connect to the AirSim simulator
        self.client = airsim.MultirotorClient()
        self.client.confirmConnection()
        self.client.enableApiControl(True)
        self.file_path = r"C:\Users\Andrea A\Unreal Projects\iplom\Content\measurements.csv"
        self.clear_file()
        self.matrix= [[None for _ in range(2)] for _ in range(5)]
        
   
        self.matrix_to_csv(self.file_path)



    def takeoff(self):
        """Handles drone takeoff."""
        print("Arming drone and taking off")
        self.client.armDisarm(True)
        self.client.takeoffAsync().join()

    def orientation_monitoring(self):
        """Monitors the orientation using Lidar sensors."""
        spostamento = 10  # Distance between sensors
        self.client.moveToPositionAsync(0, 0, -self.default_alt, 5).join()  # Default height for inclination monitoring

        for i in range(len(self.points) - 1):
            print(f"Processing point {i + 1}: {self.points[i + 1]['name']}")
            x,y,z = geodetic_to_enu(self.points[0]['lon'],self.points[0]['lat'],self.points[0]['alt'],self.points[i+1]['lon'],self.points[i+1]['lat'],self.points[i+1]['alt'])
            #print(f"Moving to coordinates: x={x}, y={y}, z={z}")
            self.client.moveToPositionAsync(-y, x, z, 5).join()
            time.sleep(5)

            s1, s2 = [], []
            for j in range(50):
                mis1 = self.client.getDistanceSensorData("DistanceSensor1", "SimpleFlight").distance
                mis2 = self.client.getDistanceSensorData("DistanceSensor2", "SimpleFlight").distance
                s1.append(mis1)
                s2.append(mis2)
                time.sleep(0.5)
            mediana1 = statistics.median(s1)
            mediana2 = statistics.median(s2)

            media_sens1 = sum(s1) / len(s1)
            media_sens2 = sum(s2) / len(s2)

            tan = abs(mediana1 - mediana2) / spostamento
            angolo_rad = math.atan(tan)
            angolo_deg = math.degrees(angolo_rad)
            self.add_and_save_measurement(i,0,str(round(angolo_deg, 2)))
            print(f"Sensor1 median: {mediana1}")
            print(f"Sensor2 median: {mediana2}")

            print(f"Rooftop's slope: {round(angolo_deg, 2)}°")

            time.sleep(3)

    def leakage_detection(self):
        """Detects leakage (meshes) using the camera."""
        camera_name = "bottom_center"
        image_type = airsim.ImageType.Scene

        # Set detection radius in [cm]
        self.client.simSetDetectionFilterRadius(camera_name, image_type, 200*100)

        # Add desired object name to detect in wildcard/regex format
        self.client.simAddDetectionFilterMeshName(camera_name, image_type, "BP_Fountain*")

        # Take off
        self.client.takeoffAsync().join()

        # Set the vehicle name (you can set it dynamically if you have multiple vehicles)
        vehicle_name = "SimpleFlight"  # Modify this based on your actual vehicle name


        # Set the altitude to 40 for leakage detection and process points in reverse order
        for i in range(len(self.points) - 1, 0, -1):  # Reverse from SERB5 to SERB1
            print(i)
            self.points[i]["alt"] = self.alt_leakage_detection
            print(f"Moving to point {self.points[i]['name']} for leakage detection")
            x, y, z = geodetic_to_enu(self.points[0]['lon'], self.points[0]['lat'], self.points[0]['alt'],
                                       self.points[i]['lon'], self.points[i]['lat'], self.points[i]['alt'])
            self.client.moveToPositionAsync(-y, x, z, 5).join()

            # Get image from the camera
            rawImage = self.client.simGetImage(camera_name, image_type)
            if not rawImage:
                return

            png = cv2.imdecode(airsim.string_to_uint8_array(rawImage), cv2.IMREAD_UNCHANGED)

            # Get the meshes detected in the image
            meshes = self.client.simGetDetections(camera_name, image_type)
            if meshes:
                for mesh in meshes:
                    print(f"Warning! Hazard at tank number: {int(mesh.name.split('_')[-1])+1}")
                self.add_and_save_measurement(i-1,1,"detect")

            else:
                print(f"Everything safe at tank number: {i}! No leackage detected.")
                self.add_and_save_measurement(i-1,1,"safe")

            '''
                cv2.imshow("AirSim", png)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                return
            elif cv2.waitKey(1) & 0xFF == ord('c'):
                self.client.simClearDetectionMeshNames(camera_name, image_type)
            elif cv2.waitKey(1) & 0xFF == ord('a'):
                self.client.simAddDetectionFilterMeshName(camera_name, image_type, "*")
            cv2.destroyAllWindows()
            '''

    def land(self):
        """Handles drone landing."""
        print("Landing drone...")
        self.client.moveToPositionAsync(0, 0, -self.default_alt-10, velocity=5).join()  # Default height for landing
        self.client.landAsync().join()
        self.client.armDisarm(False)
        self.client.enableApiControl(False)

    def clear_file(self):
        """If the file exists, clear its content."""
        if os.path.exists(self.file_path):
            with open(self.file_path, 'w') as file:
                pass  # Just open and close to clear the file

   
    def add_and_save_measurement(self,row,col,val):
        print('aggiunto a matrice')
        self.matrix[row][col] = val
        self.matrix_to_csv(self.file_path)
        
  
    def matrix_to_csv(self, filename='output.csv'):
        """Convert matrix to CSV file, handling None values."""
        # Convert None to empty string for CSV compatibility
        
        csv_matrix = [["None" if cell is None else cell for cell in row] for row in self.matrix]
    
        with open(filename, 'w', newline='') as csvfile:
            writer = csv.writer(csvfile)
            writer.writerows(csv_matrix)
        return filename

# Main function to handle tasks
def main():
    drone = AirSimDrone()
    

    # Take off
    drone.takeoff()
   
    # Perform orientation monitoring
    drone.orientation_monitoring()

    # Detect leakage (meshes)
    drone.leakage_detection()

    # Land the drone
    drone.land()

if __name__ == "__main__":
    main()
