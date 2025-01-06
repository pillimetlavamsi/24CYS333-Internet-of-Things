# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

# IoT#18 Integrated Smart Home Intrusion Detection System 
## Team Members
|   *Name* |   *Roll Number*   |
|------------|---------------------|
|[Lalitha K](https://github.com/Lalitha0614)   |CB.EN.U4CYS22037     |
|[Parthiv kumar Nikku](https://github.com/parthivkumarnikku)   |CB.EN.U4CYS22046     |
|[Pillimetla Vamsi](https://github.com/pillimetlavamsi)      |CB.EN.U4CYS22047     |
## Problem Statement
Current smart home solutions often lack integration, requiring multiple systems for Intrusion Detection and health monitoring. This project aims to develop a unified IoT-based platform that ensures home security through intrusion detection, monitors health via sensors, and enhancing convenience, safety, and well-being in a smart living environment.

# Literature Survey

## Existing Solutions

### Intrusion Detection Systems (IDS)
- *IoT-Based Smart Home Security System*: Utilizes PIR motion sensors and alerts for intrusion detection. However, it is limited to standalone security.
- *IoT Security Survey*: Explores IoT security methods, emphasizing challenges in scalability and integration.

### Health Monitoring Systems
- *IoT-Based Health Monitoring System*: Tracks heart rate and body temperature with real-time alerts but lacks integration into smart home ecosystems.

## Research Gaps and Our Objective
- *Use of Multiple Sensors*: Existing solutions lack comprehensive multi-sensor setups for intrusion detection.
- *Integration Challenges*: There is a lack of integration between intrusion detection and health monitoring.
- *Unified IoT Platforms*: Limited focus on creating unified IoT platforms for enhanced user convenience in smart homes.

## Challenges
- *Integration Complexity*: Combining intrusion detection and health monitoring is difficult due to limited resources.
- *Real-Time Functionality*: Ensuring real-time performance across diverse IoT systems is challenging.
- *Privacy and Security Concerns*: Addressing privacy and security issues related to sensitive health.
- *Cost-Effectiveness*: Developing scalable, user-friendly, and cost-effective solutions.


## Hardware / Resources

## Intrusion Detection
| *Component*             | *Function*                                               | *Reason for Inclusion*                                                                 |
|----------------------------|-----------------------------------------------------------|-----------------------------------------------------------------------------------------|
| *Raspberry Pi 4*         | Acts as the central processing unit, handling sensor data and communication. | Provides computational power for processing sensor data, managing communication modules, and sending alerts to users. |
|                            |                                                           | Supports USB boot and network boot, eliminating the need for an SD card.               |
| *PIR Sensor (HC-SR501)*  | Detects motion by sensing infrared radiation changes from humans or animals. | Essential for motion detection; adjustable, reliable, and affordable.                  |
| *Ultrasonic Sensor (HC-SR04)* | Measures distance to detect objects or intrusions beyond the PIR range.  | Enhances detection accuracy, reducing false positives.                                 |
| *Smartphone (Phone Camera)* | Captures images or videos for visual confirmation of intrusions. | Acts as a cost-effective alternative to IP cameras; enables video surveillance.         |
|                            |                                                           | Connects via Wi-Fi or Bluetooth to stream footage to the Raspberry Pi or cloud.         |
| *Wi-Fi Module (ESP8266 or ESP32)* | Provides wireless communication between the Raspberry Pi and cloud or mobile devices. | Enables IoT functionality for sending alerts and notifications over a network.         |
| *Buzzer or Alarm*        | Produces an audible alert when an intrusion is detected.  | Provides immediate local notification for nearby individuals.                          |
| *LED Indicators*         | Provides visual feedback for system status (e.g., active, idle, triggered). | Helps monitor the operational state of the system locally.                              |
| *Power Supply (5V Adapter)* | Powers the Raspberry Pi, sensors, and communication modules. | Ensures stable operation of all components.                                            |
| *USB Drive (or SSD)*     | Storage medium for booting the Raspberry Pi and temporary data storage. | Used for booting the OS and storing temporary files. Can replace SD cards.             |
| *Breadboard*             | Facilitates prototyping and wiring of components.         | Allows modular connections without soldering.                                          |
| *Jumper Wires*           | Connects components to the Raspberry Pi or breadboard.    | Essential for creating circuit setups.                                                 |
| *Resistors (e.g., 330Ω)* | Protects LEDs and other components by limiting current flow. | Prevents damage to sensitive components from overcurrent.                              |

---

## Health Monitoring Components

| *Component*                 | *Model*       | *Function*                                      | *Reason for Inclusion*                              |
|-------------------------------|-----------------|--------------------------------------------------|------------------------------------------------------|
| *Pulse Oximeter Sensor*     | MAX30102        | Measures heart rate and SpO₂.                    | Vital for monitoring cardiovascular health.          |
| *Body Temperature Sensor*   | DS18B20         | Measures body temperature with high accuracy.    | Detects fever or hypothermia.                        |
| *Non-Contact IR Temperature Sensor* | MLX90614  | Measures temperature without direct contact.     | Hygienic and convenient for wearable devices.        |
| *Blood Pressure Sensor Module* | SEN-11574    | Tracks systolic and diastolic pressure.          | Monitors blood pressure for overall health.          |
| *ECG Sensor Module*         | AD8232         | Records electrical activity of the heart (ECG).  | Detects heart conditions and arrhythmias.            |
| *Respiration Sensor*        | MPXV7002DP     | Measures breathing patterns and respiration rate.| Useful for monitoring respiratory health.            |
| *Accelerometer and Gyroscope* | MPU6050      | Tracks body motion and physical activity.        | Detects falls and movement, useful for elderly care. |

---


## Proposed Solution
*The Integrated IoT-Based Smart Home System* will utilize a Raspberry Pi as the central controller. The system will integrate intrusion detection through motion sensors, health monitoring through wearable devices. A mobile app will provide a user-friendly interface for monitoring, control, and alerts.
1. *Intrusion Detection:*
   - Motion sensors and cameras will detect unauthorized movements and send alerts to the homeowner's smartphone.
   - Network intrusion detection using honey pot for enhancing security.
2. *Health Monitoring:*
   - Sensors will monitor vital signs like heart rate, blood pressure, SpO2 in real-time,sugar levels, including basic health tracking(Body movement and Exercise)
3. Colabrating with Teams workingon smart home(Smart light, motion detection, Air Quality, etc)

## SDG
*Sustainable Development Goals (SDG):*
1. *Good Health and Well-Being (SDG 3):* The system promotes health monitoring  to improve well-being.
2. *Sustainable Cities and Communities (SDG 11):* Enhances safety and smart living through integrated IoT solutions.
3. *Industry, Innovation, and Infrastructure (SDG 9):* Encourages innovation in IoT for unified home systems.

## References
https://ieeexplore.ieee.org/abstract/document/8256877 

https://www.researchgate.net/profile/Prajoona-Valsalan/publication/340665031_IOT_BASED_HEALTH_MONITORING_SYSTEM/links/5f60adb792851c078967a5f3/IOT-BASED-HEALTH-MONITORING-SYSTEM.pdf
https://ieeexplore.ieee.org/abstract/document/8079564


