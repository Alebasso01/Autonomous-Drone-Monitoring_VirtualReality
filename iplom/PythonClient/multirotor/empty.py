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
    {"name": "SERB2","lat":44.582908, "lon":8.941081, "alt":50},
    {"name": "SERB3","lat":44.583435,"lon":8.941107, "alt":50},
    {"name": "SERB4","lat":44.583953,"lon":8.941103, "alt":50},
    {"name": "SERB5","lat": 44.58445,"lon":8.941150, "alt":50},
    {"name": "LANDING", "lat": 44.582218, "lon": 8.941591, "alt": 50},
]


# Connessione ad AirSim
client = airsim.MultirotorClient()
client.confirmConnection()

'''
#initial_position = airsim.Vector3r(x_val=19160, y_val=-11100, z_val=-182410)
initial_position = airsim.Vector3r(x_val=0, y_val=0, z_val=-184710)

initial_orientation = airsim.Quaternionr()
initial_pose = airsim.Pose(initial_position, initial_orientation)

client.simSetVehiclePose(initial_pose, True)
'''

client.enableApiControl(True)
client.armDisarm(True)
# Decollo


client.takeoffAsync().join()

client.moveToPositionAsync(0,0,-50,velocity=10).join()

for i in range(len(points)-1):
    print(i,points[i+1]['name'])
    x,y,z=geodetic_to_enu(points[0]["lon"],points[0]["lat"],points[0]["alt"], points[i+1]['lon'],points[i+1]['lat'],points[i+1]['alt'])
    print(x,y,z)

    client.moveToPositionAsync(-y,x,z,velocity=10).join()
    client.hoverAsync().join()
    
    #print(client.getMultirotorState().gps_location)
    time.sleep(2)
    #print(state4)
    #print(geodetic_to_enu(state1.latitude,state1.longitude,state1.altitude,state4.latitude, state4.longitude, state4.altitude))
client.moveToPositionAsync(0,0,0,velocity=10).join()

client.landAsync().join()
#client.moveToPositionAsync()
client.armDisarm(False)
client.enableApiControl(False)


