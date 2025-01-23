# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

# IoT#18 Integrated Smart Home Intrusion Detection System 
![](https://img.shields.io/badge/Member-Lalitha_K-gold)  ![](https://img.shields.io/badge/Member-Nikku_Parthiv_Kumar-gold)  ![](https://img.shields.io/badge/Member-Pillimetla_Vamsi-gold) <br/> 
![](https://img.shields.io/badge/SDG-3-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) ![](https://img.shields.io/badge/SDG-11-darkgreen) <br/>

## Problem Statement

Current smart home solutions often lack seamless integration, requiring multiple independent systems to address home security, health monitoring, and network safety. This project aims to develop a unified IoT-based platform that combines physical home security through intrusion detection, health monitoring via advanced sensors, and network intrusion detection using software like HoneyPi, etc. By integrating these functionalities into a single system, the platform enhances convenience, safety, and well-being, offering a comprehensive smart living solution.

---

## Hardware / Resources

## Intrusion Detection
| Component             | Function                                               | Purpose for Inclusion                                                                 |
|----------------------------|-----------------------------------------------------------|-----------------------------------------------------------------------------------------|
| Raspberry Pi 4         | Acts as the central processing unit, handling sensor data and communication. | Provides computational power for processing sensor data, managing communication modules, and sending alerts to users. |
|                            |                                                           | Supports USB boot and network boot, eliminating the need for an SD card.               |
| PIR Sensor (HC-SR501)  | Detects motion by sensing infrared radiation changes from humans or animals. | Essential for motion detection; adjustable, reliable, and affordable.                  |
| Ultrasonic Sensor (HC-SR04) | Measures distance to detect objects or intrusions beyond the PIR range.  | Enhances detection accuracy, reducing false positives.                                 |
| Smartphone (Phone Camera) | Captures images or videos for visual confirmation of intrusions. | Acts as a cost-effective alternative to IP cameras; enables video surveillance.         |
|                            |                                                           | Connects via Wi-Fi or Bluetooth to stream footage to the Raspberry Pi or cloud.         |
| Wi-Fi Module (ESP8266 or ESP32) | Provides wireless communication between the Raspberry Pi and cloud or mobile devices. | Enables IoT functionality for sending alerts and notifications over a network.         |
| Buzzer or Alarm        | Produces an audible alert when an intrusion is detected.  | Provides immediate local notification for nearby individuals.                          |
| LED Indicators         | Provides visual feedback for system status (e.g., active, idle, triggered). | Helps monitor the operational state of the system locally.                              |
| Power Supply (5V Adapter) | Powers the Raspberry Pi, sensors, and communication modules. | Ensures stable operation of all components.                                            |
| USB Drive (or SSD)     | Storage medium for booting the Raspberry Pi and temporary data storage. | Used for booting the OS and storing temporary files. Can replace SD cards.             |
| Breadboard             | Facilitates prototyping and wiring of components.         | Allows modular connections without soldering.                                          |
| Jumper Wires           | Connects components to the Raspberry Pi or breadboard.    | Essential for creating circuit setups.                                                 |
| Resistors (e.g., 330Ω) | Protects LEDs and other components by limiting current flow. | Prevents damage to sensitive components from overcurrent.                              |

---

## Health Monitoring Components

| Component                 | Model       | Function                                      | Purpose for Inclusion                              |
|-------------------------------|-----------------|--------------------------------------------------|------------------------------------------------------|
| Pulse Oximeter Sensor     | MAX30102        | Measures heart rate and SpO₂.                    | Vital for monitoring cardiovascular health.          |
| Body Temperature Sensor   | DS18B20         | Measures body temperature with high accuracy.    | Detects fever or hypothermia.                        |
| Non-Contact IR Temperature Sensor | MLX90614  | Measures temperature without direct contact.     | Hygienic and convenient for wearable devices.        |
| Blood Pressure Sensor Module | SEN-11574    | Tracks systolic and diastolic pressure.          | Monitors blood pressure for overall health.          |
| ECG Sensor Module         | AD8232         | Records electrical activity of the heart (ECG).  | Detects heart conditions and arrhythmias.            |
| Respiration Sensor        | MPXV7002DP     | Measures breathing patterns and respiration rate.| Useful for monitoring respiratory health.            |
| Accelerometer and Gyroscope | MPU6050      | Tracks body motion and physical activity.        | Detects falls and movement, useful for elderly care. |

---

# Literature Survey

## Existing Solutions

### Intrusion Detection Systems (IDS)
- IoT-Based Smart Home Security System: Utilizes PIR motion sensors and alerts for intrusion detection. However, it is limited to standalone security.
- IoT Security Survey: Explores IoT security methods, emphasizing challenges in scalability and integration.

### Health Monitoring Systems
- IoT-Based Health Monitoring System: Tracks heart rate and body temperature with real-time alerts but lacks integration into smart home ecosystems.

### Honeypot for Network Intrusion Detection
-Honeypots simulate vulnerable systems to detect and log malicious activities. While effective for analyzing attacks, they often operate independently and lack integration with smart home platforms.
-HoneyPi acts as a lightweight honeypot to detect and log network intrusions

## Research Gaps and Our Objective
- Use of Multiple Sensors: Existing solutions lack comprehensive multi-sensor setups for intrusion detection.
- Integration Challenges: There is a lack of integration between smart home intrusion detection, intrusion detection and health monitoring.
- Unified IoT Platforms: Limited focus on creating unified IoT platforms for enhanced user convenience in smart homes.
- CREATING AN INTEGRATED SMART HOME

## Challenges
- Integration Complexity: Combining intrusion detection and health monitoring is difficult due to limited resources.
- Configuring and using HoneyPi for smart home network Intrusion Detection System and integrating it..
- Real-Time Functionality: Ensuring real-time performance across diverse IoT systems is challenging.
- Privacy and Security Concerns: Addressing privacy and security issues related to sensitive health.
- Cost-Effectiveness: Developing scalable, user-friendly, and cost-effective solutions.

---

## Proposed Solution

#### Relevance of Proposed Work 
The Integrated IoT-Based Smart Home Intrusion Detection System will utilize a Raspberry Pi as the central controller. The system will integrate intrusion detection through motion sensors, network intrusion detection through HoneyPi, health monitoring through wearable devices. A mobile app will provide a user-friendly interface for monitoring, control, and alerts.
1. Intrusion Detection:
   - Motion sensors and cameras will detect unauthorized movements and send alerts to the homeowner's smartphone.
   - Network intrusion detection using Honeypot for enhancing security.
2. Health Monitoring:
   - Sensors will monitor vital signs like heart rate, blood pressure, SpO2 in real-time,sugar levels, including basic health tracking(Body movement and Exercise)
3. Colabrating with Teams workingon smart home(Smart light, motion detection, Air Quality, etc)
   
---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG | Alignment |
|:---|:----------|
| Goal 3 - Good Health and Well-Being | The system promotes health monitoring  to improve well-being. |
| Goal 9 - Industry, Innovation, and Infrastructure | Encourages innovation in IoT for unified home systems. |
| Goal 11 - Sustainable Cities and Communities | Enhances safety and smart living through integrated IoT solutions. |


### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#23 | Iot-Based Smart Lighting with Adaptive Brightness and Motion Detection  | 

---



## References
- Sahoo, K. C., & Pati, U. C. (2017, May). **IoT based intrusion detection system using PIR sensor**. _In 2017 2nd IEEE International Conference on Recent Trends in Electronics, Information & Communication Technology__ (RTEICT) (pp. 1641-1645). IEEE.
  
- Valsalan, P., Baomar, T. A. B., & Baabood, A. H. O. (2020). **IoT based health monitoring system**. _Journal of critical reviews__, 7(4), 739-743.

- Saha, H. N., Auddy, S., Pal, S., Kumar, S., Pandey, S., Singh, R., ... & Saha, S. (2017, August). **Health monitoring using internet of things (IoT)**. __In 2017 8th annual industrial automation and electromechanical engineering conference__ (IEMECON) (pp. 69-73). IEEE.

- Tripathi, S., & Kumar, R. (2018, December). **Raspberry pi as an intrusion detection system, a honeypot and a packet analyzer**. __In 2018 International Conference on Computational Techniques, Electronics and Mechanical Systems__ (CTEMS) (pp. 80-85). IEEE.

- Mahajan, V., & Peddoju, S. K. (2017, May). **Integration of network intrusion detection systems and honeypot networks for cloud security**. __In 2017 International Conference on Computing, Communication and Automation__ (ICCCA) (pp. 829-834). IEEE.
