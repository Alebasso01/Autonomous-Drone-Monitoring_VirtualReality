## Augmented & Virtual Reality Project
# Autonomous Drone Monitoring for Industrial Hazard Scenarios
#### University of Genoa, February 2025


### Group members

| Name | Surname | ID  | Email address |
|------|---------|-----|---------------|
|Alessandro   |Basso     |S4967217     | 4967217@studenti.unige.it |
|Andrea       |Alfieri   |S4829586     | 4829586@studenti.unige.it |
|Federico     |Simonelli |S4981835     | 4981835@studenti.unige.it |
|Massimo      |Bacchione |S4849627     | 4849627@studenti.unige.it |

#### Supervisors

- Prof. Gianni Viardo Vercelli
- Subhransu Sourav Priyadarshan

## Aim of the project
This project involves the development of a highly realistic simulation environment for
an industrial refinery, specifically designed to replicate the Iplom refinery in Busalla. 
The simulation will feature floating roof storage tanks, pipelines, containment zones, and detailed fluid dynamics modeling.
A key component is the integration of a drone-based system to monitor liquid levels, detect spills, and
dynamically adapt monitoring strategies to address anomalous situations.


### Required Tools & Languages

- Unreal Engine 5.4
- Visual Studio 2022 (with Windows 11 SDK 10.0.22621 and .NET Framework 4.8 SDK)
- Python 3.7.6
- C++

### Unreal Engine Plugins
- Cesium
- AirSim (Colosseum Version)
- Modeling

### How to build the project

1. Clone this repository with `git clone https://github.com/Alebasso01/Autonomous-Drone-Monitoring_VirtualReality.git`
2. Follow the steps in the [Airsim Build Guide](https://microsoft.github.io/AirSim/build_windows/)
3. Install Python's requirements in the "requirements.txt" file with `pip install -r requirements.txt` (python 3.7.6)
4. Generate the Visual Studio files
5. Build the project

### Troubleshooting
If you have issues building the project inside a git repository, we suggest you to remove the project folder from the git repository. Doing so should allow you to build the project correctly. If this doesn't work, try removing the folders generated during the previous build. 
