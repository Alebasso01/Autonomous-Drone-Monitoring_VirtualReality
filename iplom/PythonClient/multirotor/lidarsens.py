# Python client example to get Lidar data from a drone


import setup_path 
import airsim
import sys
import math
import time
import argparse
import pprint
import numpy
def geodetic_to_enu(lat, lon, alt, lat_ref, lon_ref, alt_ref):
    """
    Converte coordinate geografiche (lat, lon, alt) in coordinate locali ENU rispetto a un riferimento.
    - lat, lon, alt: coordinate geografiche del punto.
    - lat_ref, lon_ref, alt_ref: coordinate di riferimento.
    """
    # Raggio della Terra in metri
    earth_radius = 6378137.0

    # Conversione delle latitudini e longitudini in radianti
    lat = math.radians(lat)
    lon = math.radians(lon)
    lat_ref = math.radians(lat_ref)
    lon_ref = math.radians(lon_ref)

    # Differenze tra il punto e il riferimento
    d_lat = lat - lat_ref
    d_lon = lon - lon_ref

    # Calcolo delle coordinate ENU
    x = earth_radius * d_lon * math.cos(lat_ref)
    y = earth_radius * d_lat
    z = -alt_ref

    return x, y, z

# Makes the drone fly and get Lidar data
class LidarTest:

    def __init__(self):
        self.scale = 1  # Puoi cambiare questo valore per ottenere una mappatura più precisa
        # lat -> y lo -> x
        self.points = [
    {"name": "TAKEOFF", "lat": 44.582235, "lon": 8.941572, "alt": 0},
    {"name": "SERB1", "lat": 44.582485, "lon": 8.941200, "alt": 0},
    {"name": "SERB2","lat":44.582968, "lon":8.941181, "alt":0},
    {"name": "SERB3","lat":44.583485,"lon":8.941107, "alt":0},
    {"name": "SERB4","lat":44.584000,"lon":8.941153, "alt":0},
    {"name": "SERB5","lat": 44.584550,"lon":8.9412000, "alt":0},
    {"name": "LANDING", "lat": 44.582218, "lon": 8.941591, "alt": 0},

    
]
      # connect to the AirSim simulator
        self.client = airsim.MultirotorClient()
        self.client.confirmConnection()
        self.client.enableApiControl(True)
    def execute4(self):
        self.client.armDisarm(True)
        self.client.takeoffAsync().join()
        self.client.moveToPositionAsync(0,0,-10,velocity=10).join()
        for i in range(1,11):
            print(i)
            lidarData = self.client.getLidarData('LidarSensor1','Drone1');
            if (len(lidarData.point_cloud) < 1):              
                print("\tNo points received from Lidar data")
            else:
                points = self.parse_lidarData(lidarData)
                
                xv,yv,zv = 0,0,0
                for a,b,c in points:
                    xv+=a
                    yv+=b
                    zv+=c
                print(xv/len(points),yv/len(points),zv/len(points))
                print("\tReading %d: time_stamp: %d number_of_points: %d" % (i, lidarData.time_stamp, len(points)))
                print("\t\tlidar position: %s" % (pprint.pformat(lidarData.pose.position)))
                #print('\n\n',vars(lidarData.pose.position))
                #print("\t\tlidar orientation: %s" % (pprint.pformat(lidarData.pose.orientation)))
            time.sleep(5)
            self.client.moveToPositionAsync(0,0,-5*i,velocity=10).join()
            time.sleep(5)

        print('\n\n')
    def execute(self):
        print('-->',self.client.getDistanceSensorData("DistanceSensor1","Drone1"))
        print("arming the drone...")
        self.client.armDisarm(True)
        self.client.takeoffAsync().join()
        print('-->',self.client.getDistanceSensorData("DistanceSensor1","Drone1"))
        self.client.moveToPositionAsync(0,0,0,10).join()
        print('-->',self.client.getDistanceSensorData("DistanceSensor1","Drone1"))

        for i in range(len(self.points)-1):
            print(i+1,self.points[i+1]['name'])
            x,y,z = geodetic_to_enu(self.points[0]['lon'],self.points[0]['lat'],self.points[0]['alt'],self.points[i+1]['lon'],self.points[i+1]['lat'],self.points[i+1]['alt'])
            print(x,y,z)
            self.client.moveToPositionAsync(-y,x,z,3).join()
            time.sleep(10)
            measurements = []
            for j in range(20):
                mes = self.client.getDistanceSensorData("DistanceSensor1","Drone1").distance
                print(f"Misurazione {j+1}: {mes}")
                measurements.append(mes)
                time.sleep(0.2)
            print('-'*20+'\n'+f'Min: {min(measurements)} | Max: {max(measurements)}\n'+f'Escursione: {max(measurements)-min(measurements)}'+'\n'+'-'*20)
            time.sleep(3)
        self.client.moveToPositionAsync(0,0,20,velocity=10).join() # non testato

        self.client.landAsync().join() 
        #client.moveToPositionAsync()
        self.client.armDisarm(False)
        self.client.enableApiControl(False)
     
        #airsim.wait_key('Press any key to move vehicle to (-10, 10, -10) at 5 m/s')
        #self.client.moveToPositionAsync(-1, 1, -30, 5).join()
        def test():
            self.client.moveToPositionAsync(0,0,0,10).join()
            time.sleep(5)
            print(self.client.getDistanceSensorData("DistanceSensor1","Drone1").distance)
            self.client.moveToPositionAsync(0,0,-20,10).join()
            time.sleep(5)
            print(self.client.getDistanceSensorData("DistanceSensor1","Drone1").distance)
            self.client.moveToPositionAsync(0,0,-30,10).join()
            time.sleep(5)
            print(self.client.getDistanceSensorData("DistanceSensor1","Drone1").distance)
            self.client.moveToPositionAsync(0,0,-40,10).join()
            time.sleep(5)
            print(self.client.getDistanceSensorData("DistanceSensor1","Drone1").distance)
            self.client.moveToPositionAsync(0,0,-50,10).join()
            time.sleep(5)
            print(self.client.getDistanceSensorData("DistanceSensor1","Drone1").distance)
            
        #test()
        #exit()
        #self.client.moveToPositionAsync(0,0,-30,velocity=10).join()

        

    def parse_lidarData(self, data):

        # reshape array of floats to array of [X,Y,Z]
        points = numpy.array(data.point_cloud, dtype=numpy.dtype('f4'))
        points = numpy.reshape(points, (int(points.shape[0]/3), 3))
       
        return points

    def write_lidarData_to_disk(self, points):
        # TODO
        print("not yet implemented")

    def stop(self):

        #airsim.wait_key('Press any key to reset to original state')

        self.client.armDisarm(False)
        self.client.reset()

        self.client.enableApiControl(False)
        print("Done!\n")

# main
if __name__ == "__main__":
    args = sys.argv
    args.pop(0)

    arg_parser = argparse.ArgumentParser("Lidar.py makes drone fly and gets Lidar data")

    arg_parser.add_argument('-save-to-disk', type=bool, help="save Lidar data to disk", default=False)
  
    args = arg_parser.parse_args(args)    
    lidarTest = LidarTest()
    try:
        lidarTest.execute()
    finally:
        lidarTest.stop()