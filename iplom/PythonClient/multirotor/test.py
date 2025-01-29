import airsim
import time

# Inizializza il client AirSim
client = airsim.MultirotorClient()
client.confirmConnection()
client.enableApiControl(True)
client.armDisarm(True)

# Decollo
print("Decollo...")
client.takeoffAsync().join()

# Array di punti geografici (latitudine, longitudine, altitudine)
points = [
    {"latitude": 45.46428, "longitude": 9.18952, "altitude":- 190.0},
    {"latitude": 45.46429, "longitude": 9.18953, "altitude": -180.0},
    {"latitude": 45.46430, "longitude": 9.18954, "altitude":- 170.0},
]

# Funzione per convertire coordinate geografiche in coordinate locali (AirSim lo fa automaticamente)
def move_to_geopoint(point):
    client.moveToPositionAsync(
        point["latitude"],
        point["longitude"],
        point["altitude"],
        velocity=5.0
    ).join()

# Sorvola i punti
for i, point in enumerate(points):
    print(f"Muoviti verso il punto {i+1}: {point}")
    move_to_geopoint(point)
    time.sleep(2)  # Pausa per stabilizzare il drone

# Atterraggio
print("Atterraggio...")
client.landAsync().join()

# Disarma il drone e disabilita i controlli API
client.armDisarm(False)
client.enableApiControl(False)

print("Missione completata.")

