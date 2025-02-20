# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#08 - Smart Vehicle Theft Detection System Using GPS

![](https://img.shields.io/badge/Member-Aadhithya_Sivakumar-gold)  ![](https://img.shields.io/badge/Member-Hamsini_G-gold)  ![](https://img.shields.io/badge/Member-Rahul_Shankar_V-gold) <br/> 
![](https://img.shields.io/badge/SDG-9-darkgreen) ![](https://img.shields.io/badge/SDG-16-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-23rd_Jan_2025-brown) <br/> 
![](https://img.shields.io/badge/-AIC_Raise_Hackathon-brown) <br/>


---
### Problem Statement
Addressing the issue of wide-spread vehicle theft, by implementing a tamperproof and transparent method of monitoring and communicating with your vehicle and its safety system. The aim is to have a alert and tracking system that tracks the location and condition of the vehicle.

---
### Hardware Requirements

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
| R 307 fingerprint module | Biometric verification of owner via fingerprint recognition |
| Alarm/Buzzer | Alerting the surrounding populace |
| MPU6050 Accelerometer | To detect sudden unexpected movement of the car |
| Neo-6M GPS module | Geofencing and Geolocation features |
| Rechargeble Battery | Active monitoring even when the car is off |
| SIM800L GSM module | Enable communication using cellular network |

---
### Literature Survey  
#### Existing Solutions: 
- IoT-based tracking systems are commonly used to provide real-time vehicle location data. Examples include RFID, GPS, and GSM technologies for communication and tracking. 
- Cloud platforms and mobile applications to manage and monitor vehicle data. 
- Protocols: 
	- MQTT (Message Queuing Telemetry Transport) and HTTP protocols are widely used for IoT communication. 
	- Data encryption protocols for secure transmission. 
#### Previous Implementations:
- GSM-GPS-based vehicle tracking systems, which send location updates via SMS. 
- Anti-theft systems using geofencing technology to alert owners when vehicles exit predefined boundaries. 
- Systems integrated with vehicle immobilization mechanisms (e.g., remotely cutting off fuel or engine). 
#### Challenges:
- Power consumption and reliability of IoT devices. 
- Dependence on internet connectivity, leading to performance issues in remote areas. 
- Vulnerabilities to cyberattacks, such as hacking or GPS spoofing.
---
### Proposed Solution 
The aim of the proposed solution is to have a system that detects unauthorized entry such as a break in and an unauthorized car jack.
##### Case 1 (Normal usage):
* Driver enters the car and closes the door.
* He puts his finger on the fingerprint scanner which authenticates him.
* The car can then continue operating normally.
##### Case 2 (Intruder breaks into car):
* The fingerprint scanner fails and raises alarm.
* An SoS is sent to the phone and its live location is transmitted via the GPS.
* The owner can then inform the police who can track the car.
* At the opportune moment, the owner can disable the engine motors and activate the alarm system.
##### Case 3 (Carjacking):
* The intruder decides to take the car by using some sort of car dragging mechanism so that he steal the car without driving it.
* The accelerometer in the car detects this movement and immediately sounds the alarm and sends SoS to the owners phone number.
* Even if that doesn't trigger, the GPS can be used for geofencing.
* The owner can again wait for the opportune moment to the sound the alarm again for helping the police detect the car

#### Relevance of Proposed Work  
1. **Low false positive problems:** Even if a mistake happens from the point of the owner, such as leaving a child in the car, only the owner has full control on how to handle it as not automatic responses happen 
2. **Real-Time Activity Monitoring:** IoT integration enables real-time tracking of  vehicle and remote control to specific actuators of the car to ensure swift detection
---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG                                               | Alignment                                                                                                                             |
| :------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------ |
| Goal 9 - Industry, Innovation, and Infrastructure | Giving the owner  knowledge of the cars whereabouts and control to turn off specific functionalities when the owner deems appropriate |
| Goal 16 - Peace, Justice and Strong Institutions  | Enhancing security and recovery of vehicles to ensure stolen vehicles are recovered                                                   |

### Collaboration 
| Team   | Module & Scope                                                              |
| ------ | --------------------------------------------------------------------------- |
| IoT#09 | Smart Bike Sharing System with IoT Integration for Tracking and Maintenance |

---
### References  
- Crisgar, P. V., Wijaya, P. R., Pakpahan, M. D., Syamsuddin, E. Y., & Hasanuddin, M. O. (2021, June). **GPS-based vehicle tracking and theft detection systems using Google Cloud IoT core & Firebase**. _In 2021 International Symposium on Electronics and Smart Devices (ISESD) (pp. 1-6). IEEE._
- Maurya, K., Singh, M., & Jain, N. (2012). **Real time vehicle tracking system using GSM and GPS technology-an anti-theft tracking system**. _International Journal of Electronics and Computer Science Engineering, 1(3)_, 1103-1107.
- Sathiyanarayanan, M., Mahendra, S., & Vasu, R. B. (2018, August). **Smart security system for vehicles using internet of things (IoT)**. _In 2018 Second International Conference on Green Computing and Internet of Things (ICGCIoT)_ (pp. 430-435). IEEE.
