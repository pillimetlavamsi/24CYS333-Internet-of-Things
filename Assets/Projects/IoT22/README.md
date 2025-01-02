# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#22

## Title:
 IoT-Based System to mitigate traffic congestion for emergency vehicles.

 
## Problem Statement:
Heavy traffic congestion is increasingly becoming a problem in urban areas, which is a challenge to emergency response systems. Emergency vehicles like ambulances, fire engines, and police cars are often stuck in traffic, delaying their arrival at critical locations. Such delays can have severe consequences, including loss of lives, increased damage to property, and reduced effectiveness of emergency response efforts.Currently, the existing systems of traffic management do not accommodate the needs for the free flow of emergency vehicles, especially in peak hours. This creates tremendous challenges for the emergency services when they have to navigate through roads that are very congested and,therefore, cannot provide help in time. This calls for an innovative solution to address this issue so that emergency vehicles reach their destinations without such delays.

 
## Proposed Solution:
We plan to place sound sensors all over the city for effective monitoring and detection of emergency sirens. The system will use the Sound Sensor (KY-038) connected to an ESP32 Microcontroller to process sound data in real time. If the system continuously detects the sound of an emergency siren for a long period from the same sensor, it will immediately send alerts using LED indicators and a buzzer.
These alerts perform two functions:
**Local Alerts:**
LEDs and a buzzer are responsible for local alarms that can notify other road users about an approaching emergency vehicle.
**Traffic Management:**
The system will send a signal to the nearest traffic police so that they will be able to take necessary action, then the traffic police will clear the path for the emergency vehicle.
This system is intended to make the process of traffic management responsive and efficient in terms of emergency vehicle access, reducing delays and enhancing public safety in critical situations.


## Key Features:
- Real-Time Emergency Sound Detection: Identifies high-decibel sirens and triggers responsive actions.
- IoT Connectivity: Sends data to a centralized platform for real-time monitoring and decision-making.
- Immediate Alerts: Provides visual (LED) and auditory (Buzzer) alerts during emergency events.


## Hardware Requirements:
- ESP32 Microcontroller
- Sound sensor(KY-038)
- LED Indicators
- Buzzer
- LiPo Battery based power supply
- Voltage Regulator (LM7805 or AMS1117)
- Breadboard
- Jumper Wires
- Noise Calibration Tool(Extech 407760 or BAFX Products Sound Level Meter)


## Sustainable Develpoment Goals:  
- SDG 11
