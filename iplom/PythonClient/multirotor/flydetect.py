import setup_path
import airsim
import time
import numpy as np
import os
import tempfile
import pprint
import cv2
import airsim
import math

# Funzione per convertire le coordinate geografiche in coordinate locali
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
    z = -alt

    return x, y, z


# Fattore di scala per mappare le coordinate geografiche nel mondo Unreal
scale = 1  # Puoi cambiare questo valore per ottenere una mappatura più precisa

points = [
    {"name": "TAKEOFF", "lat": 44.582235, "lon": 8.941572, "alt": 50},
    {"name": "SERB1", "lat": 44.582395, "lon": 8.941133, "alt": 50},
    {"name": "SERB2", "lat": 44.582908, "lon": 8.941081, "alt": 50},
    {"name": "SERB3", "lat": 44.583435, "lon": 8.941107, "alt": 50},
    {"name": "SERB4", "lat": 44.583953, "lon": 8.941103, "alt": 50},
    {"name": "SERB5", "lat": 44.58445, "lon": 8.941150, "alt": 50},
    {"name": "LANDING", "lat": 44.582218, "lon": 8.941591, "alt": 50},
]

# Connessione ad AirSim
client = airsim.MultirotorClient()
client.confirmConnection()



# Enable API control and arm the drone
client.enableApiControl(True)
client.armDisarm(True)

# Set camera name and image type to request images and detections
camera_name = "bottom_center"
image_type = airsim.ImageType.Scene

# Set detection radius in [cm]
client.simSetDetectionFilterRadius(camera_name, image_type, 200*100)

# Add desired object name to detect in wildcard/regex format
client.simAddDetectionFilterMeshName(camera_name, image_type, "BP_Fountain*")

# Take off
client.takeoffAsync().join()

# Set the vehicle name (you can set it dynamically if you have multiple vehicles)
vehicle_name = "SimpleFlight"  # Modify this based on your actual vehicle name

# Iterate through each checkpoint
for i in range(len(points) - 1):
    print(i, points[i + 1]['name'])
    
    # Convert geodetic coordinates to ENU coordinates
    x, y, z = geodetic_to_enu(points[0]["lon"], points[0]["lat"], points[0]["alt"], 
                              points[i + 1]['lon'], points[i + 1]['lat'], points[i + 1]['alt'])
    print(x, y, z)

    # Move the drone to the next checkpoint
    client.moveToPositionAsync(-y, x, z, velocity=10).join()
    
    # Hover and stay for 10 seconds
    client.hoverAsync().join()
    time.sleep(10)  # Wait for 10 seconds before proceeding to the next point

    # Check for the presence of the static mesh (RoofStaticMesh) using the vehicle_name parameter
    rawImage = client.simGetImage(camera_name, image_type)
    if not rawImage:
        continue
    
    # Decode the image (optional, for further processing if needed)
    png = cv2.imdecode(airsim.string_to_uint8_array(rawImage), cv2.IMREAD_UNCHANGED)
    
    # Get the detected objects (in this case, meshes) using the vehicle name
    meshes = client.simGetDetections(camera_name, image_type, vehicle_name=vehicle_name)
    
    if meshes:
        for mesh in meshes:
            # Print the detection information for debugging

            s = pprint.pformat(mesh)
            #print("Mesh: %s" % s)

            #cv2.rectangle(png,(int(mesh.box2D.min.x_val),int(mesh.box2D.min.y_val)),(int(mesh.box2D.max.x_val),int(mesh.box2D.max.y_val)),(255,0,0),2)
            #cv2.putText(png, mesh.name, (int(mesh.box2D.min.x_val),int(mesh.box2D.min.y_val - 10)), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (36,255,12))

    

            print(f"Detected Mesh: {mesh.name}")
            #print(f"Bounding Box: {mesh.box2D}")
           # print(f"Mesh Position: ({mesh.location.x_val}, {mesh.location.y_val}, {mesh.location.z_val})")
    else:
        print("No mesh detected.")

    '''
    cv2.imshow("AirSim", png)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
    elif cv2.waitKey(1) & 0xFF == ord('c'):
        client.simClearDetectionMeshNames(camera_name, image_type)
    elif cv2.waitKey(1) & 0xFF == ord('a'):
        client.simAddDetectionFilterMeshName(camera_name, image_type, "*")
cv2.destroyAllWindows() 
'''

# Move to the landing position after all waypoints
client.moveToPositionAsync(0, 0, 0, velocity=10).join()

# Land the drone and disable control
client.landAsync().join()
client.armDisarm(False)
client.enableApiControl(False)
