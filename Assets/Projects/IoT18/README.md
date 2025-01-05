# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

# IoT#18 Integrated IoT-Based Smart Home System for Security, Health Monitoring, and Dietary Assistance
## Team Members
|   **Name** |   **Roll Number**   |
|------------|---------------------|
|[Lalitha K](https://github.com/Lalitha0614)   |CB.EN.U4CYS22037     |
|[Parthiv kumar Nikku](https://github.com/parthivkumarnikku)   |CB.EN.U4CYS22046     |
|[Pillimetla Vamsi](https://github.com/pillimetlavamsi)      |CB.EN.U4CYS22047     |
## Problem Statement
Current smart home solutions often lack integration, requiring multiple systems for security, health monitoring, and dietary management. This project aims to develop a unified IoT-based platform that ensures home security through intrusion detection, monitors health via sensors, and provides personalized dietary recommendations, enhancing convenience, safety, and well-being in a smart living environment.

## Literature Survey
### Existing Solutions
1. **Smart Home Security Systems:** 
   - Systems like Ring and SimpliSafe focus primarily on home security, offering motion sensors, cameras, and alarm systems. However, these lack health and dietary integration.
2. **Health Monitoring Devices:**
   - Devices like Fitbit and smartwatches monitor vital signs but are standalone systems not integrated with home automation.
3. **Dietary Recommendation Apps:**
   - Mobile applications like MyFitnessPal provide meal recommendations but rely on manual input and are not integrated with health monitoring devices.
### Research Gaps & Our Objective
1. **Lack of Integration:** Existing systems focus on either security, health, or diet but fail to combine them into a unified platform.
2. **Real-Time Insights:** Most systems lack real-time data analysis and response capabilities.
3. **Accessibility:** Standalone systems can be complex and require multiple devices or apps.

**Objective:** To develop an integrated IoT-based smart home system that ensures security, monitors health, and provides dietary assistance in real-time, catering to both convenience and well-being.

### Challenges
1. **Hardware Integration:** Ensuring seamless communication between multiple sensors and devices.
2. **Data Processing:** Managing and analyzing real-time data efficiently.
3. **User Privacy:** Safeguarding sensitive health and security data.
4. **Reliability:** Ensuring the system performs accurately under different conditions.

## Hardware / Resources

| *Component*               | *Function*                                               | *Reason for Inclusion*                                                                 |
|------------------------------|-----------------------------------------------------------|-----------------------------------------------------------------------------------------|
| *Raspberry Pi 4*           | Acts as the central processing unit, handling sensor data and communication. | Provides computational power for processing sensor data, managing communication modules, and sending alerts to users. |
|                              |                                                           | Supports USB boot and network boot, eliminating the need for an SD card.               |
| *PIR Sensor (HC-SR501)*    | Detects motion by sensing infrared radiation changes from humans or animals. | Essential for motion detection; adjustable, reliable, and affordable.                  |
| *Ultrasonic Sensor (HC-SR04)* | Measures distance to detect objects or intrusions beyond the PIR range.  | Enhances detection accuracy, reducing false positives.                                 |
| *Smartphone (Phone Camera)*| Captures images or videos for visual confirmation of intrusions. | Acts as a cost-effective alternative to IP cameras; enables video surveillance.         |
|                              |                                                           | Connects via Wi-Fi or Bluetooth to stream footage to the Raspberry Pi or cloud.         |
| *Wi-Fi Module (ESP8266 or ESP32)* | Provides wireless communication between the Raspberry Pi and cloud or mobile devices. | Enables IoT functionality for sending alerts and notifications over a network.         |
| *Buzzer or Alarm*          | Produces an audible alert when an intrusion is detected.  | Provides immediate local notification for nearby individuals.                          |
| *LED Indicators*           | Provides visual feedback for system status (e.g., active, idle, triggered). | Helps monitor the operational state of the system locally.                              |
| *Power Supply (5V Adapter)*| Powers the Raspberry Pi, sensors, and communication modules. | Ensures stable operation of all components.                                            |
| *USB Drive (or SSD)*       | Storage medium for booting the Raspberry Pi and temporary data storage. | Used for booting the OS and storing temporary files. Can replace SD cards.             |
| *Breadboard*               | Facilitates prototyping and wiring of components.         | Allows modular connections without soldering.                                          |
| *Jumper Wires*             | Connects components to the Raspberry Pi or breadboard.    | Essential for creating circuit setups.                                                 |
| *Resistors (e.g., 330Ω)*   | Protects LEDs and other components by limiting current flow. | Prevents damage to sensitive components from overcurrent.                               |

## Proposed Solution
**The Integrated IoT-Based Smart Home System** will utilize a Raspberry Pi as the central controller. The system will integrate intrusion detection through motion sensors, health monitoring through wearable devices, and dietary assistance via personalized recommendations based on real-time health data. A mobile app will provide a user-friendly interface for monitoring, control, and alerts.
1. **Intrusion Detection:**
   - Motion sensors and cameras will detect unauthorized movements and send alerts to the homeowner's smartphone.
2. **Health Monitoring:**
   - Sensors will monitor vital signs like heart rate, blood pressure, and SpO2 in real-time.
3. **Dietary Recommendations:**
   - An AI-based module will analyze health data and provide meal plans tailored to the user's condition.
4. **Mobile App:**
   - Acts as a central hub for alerts, health insights, and dietary suggestions.

## SDG
**Sustainable Development Goals (SDG):**
1. **Good Health and Well-Being (SDG 3):** The system promotes health monitoring and dietary assistance to improve well-being.
2. **Sustainable Cities and Communities (SDG 11):** Enhances safety and smart living through integrated IoT solutions.
3. **Industry, Innovation, and Infrastructure (SDG 9):** Encourages innovation in IoT for unified home systems.

## References
[ZigBee](https://www.scitepress.org/Link.aspx?doi=10.5220/0009342200570068)  
[DNN](https://www.mdpi.com/2073-431X/12/2/34)  
[CNN](https://www.readcube.com/articles/10.7717/peerj-cs.721)  
[IOT based intrusion detection system using PIR sensor](https://ieeexplore.ieee.org/abstract/document/8256877)
