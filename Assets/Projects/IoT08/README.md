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
### **Problem Statement**
With the increasing incidence of vehicle theft worldwide, there is an urgent need for a robust and cost-effective security system that not only tracks the real-time location of vehicles but also allows the user to access the collected data in a tamperproof and transparent manner. Current anti-theft solutions often suffer from issues such as data manipulation, unauthorized system access, energy inefficiencies and cost effectiveness due to continuous tracking and hardware pricing. 

---
### **Architecture Diagram**
![BlockDiagram](https://github.com/user-attachments/assets/aeb396e1-5dc1-4aca-a612-da18b2690f63)


---
### **Hardware Requirements**

| **Components**           | **Purpose**                                     |
| :----------------------- | :---------------------------------------------- |
| Keypad ☑️                | Passcode verification                           |
| Alarm/Buzzer ☑️          | Alerting the surrounding populace               |
| MPU6050 Accelerometer ☑️ | To detect sudden unexpected movement of the car |
| Neo-6M GPS module ☑️     | Geofencing and Geolocation features             |
| Rechargeble Battery ☑️   | Active monitoring even when the car is off      |
| SIM800L GSM module ☑️    | Enable communication using cellular network     |

---
### **Literature Survey**
#### **Existing Solutions:**
- Real-time vehicle location tracking systems are commonly used to provide data. Examples such as GPS and GSM technologies.
- Cloud platforms, dashboards and mobile applications to manage and monitor vehicle data. 
- Protocols used in these implementations: 
	- MQTT (Message Queuing Telemetry Transport) and HTTP protocols are widely used for IoT communication. 
	- BLE (Bluetooth Low Energy) for short range data transmission
	- Data encryption protocols for secure transmission. 
#### **Previous Implementations (From Research Papers):**
- GSM-GPS-based vehicle tracking systems, which send location updates via SMS. 
- Anti-theft systems using geofencing technology to alert owners when vehicles exit predefined boundaries. 
- Systems integrated with vehicle immobilization mechanisms (e.g., remotely cutting off fuel or engine). 
#### **Challenges:**
- Power consumption and reliability of IoT devices. 
- Pricing of hardware required for IoT solutions.
- Dependence on internet connectivity, leading to performance issues in remote areas. 
- Vulnerabilities to cyberattacks, such as hacking or GPS spoofing.

---
### **Proposed Solution** 
This project aims to address these limitations by developing an integrated alert and tracking system that combines secure communication protocols, cost-efficient hardware, low-power sensor networks, and data integrity. The proposed system will provide real-time alerts and geospatial monitoring while ensuring that vehicle status data remains immutable and verifiable even in places with limited internet access. 

**Some of the proposed features are:**
- Alarm based alert system relying on auditory cues.
- Real-time tracking and geofencing using a GPS module or Cell tower triangulation.
- Cellular network based communication to make up for the absence of internet connection.
- Multi-level authorization and app alert system with Chain of Command based escalation.
- Motion based detection.
- Secure communication protocols and integrity verification.
Ultimately, this work intends to enhance both the prevention and rapid recovery of stolen vehicles, offering a scalable, secure, cost-efficient and energy-efficient solution to provide automotive safety.

---
### **Usecases**
##### **Case 1** (Normal usage):
* Operator enters the car.
* He enters the PIN into the keypad associated with the security system before the countdown expires.
* Message is sent to top-level user that vehicle security system has been disabled and vehicle has left the geo-fence (Low-Priority Alert).
##### **Case 2** (User fails to enter passcode in time):
- Operator enters the car.
- Operator fails to enter the passcode in time.
* Alert is sent with high priority starting from the lowest chain of command ring.
* If the Operator has access to the security system, security measures can be disabled.
##### **Case 3** (Intruder tampers with the vehicle):
* Passcode timer ends or Passcode is entered incorrectly thrice.
* Chain of command (High-Priority Alert) is sent to the phone and its live location is transmitted via the GPS.
* The owner can forward the location to the authorities and continue tracking the vehicle.
- If topmost level chain of command does not respond in time, data will be automatically sent to authorities.  
##### **Case 4** (Carjacking without entering the car):
* The intruder decides to take the car by using some sort of car dragging mechanism so that he can steal the car without driving it.
* The accelerometer in the car detects this movement and immediately sends a silent Chain of command (Medium-Priority Alert) to the owners phone number.
* If Geofencing is violated the alert priority is elevated to high.
* If topmost level chain of command does not respond in time, data will be automatically sent to authorities.  

---
### **Mapping the Project to Relevant Sustainable Development Goals (SDGs)**

| **SDG**                                               | Alignment                                                                                                                             |
| :---------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------ |
| **Goal 9** - Industry, Innovation, and Infrastructure | Giving the owner  knowledge of the cars whereabouts and control to turn off specific functionalities when the owner deems appropriate |
| **Goal 16** - Peace, Justice and Strong Institutions  | Enhancing security and recovery of vehicles to ensure stolen vehicles are recovered                                                   |

---
### **Collaboration**

| Team   | Module & Scope                                                              |
| ------ | --------------------------------------------------------------------------- |
| IoT#09 | Smart Bike Sharing System with IoT Integration for Tracking and Maintenance |

---
### **References**
- Crisgar, P. V., Wijaya, P. R., Pakpahan, M. D., Syamsuddin, E. Y., & Hasanuddin, M. O. (2021, June). **GPS-based vehicle tracking and theft detection systems using Google Cloud IoT core & Firebase**. _In 2021 International Symposium on Electronics and Smart Devices (ISESD) (pp. 1-6). IEEE._
- Maurya, K., Singh, M., & Jain, N. (2012). **Real time vehicle tracking system using GSM and GPS technology-an anti-theft tracking system**. _International Journal of Electronics and Computer Science Engineering, 1(3)_, 1103-1107.
- Sathiyanarayanan, M., Mahendra, S., & Vasu, R. B. (2018, August). **Smart security system for vehicles using internet of things (IoT)**. _In 2018 Second International Conference on Green Computing and Internet of Things (ICGCIoT)_ (pp. 430-435). IEEE.
