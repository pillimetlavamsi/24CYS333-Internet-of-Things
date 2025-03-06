# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#22 - IoT-Based System to mitigate Traffic Congestion for Emergency Vehicles

![](https://img.shields.io/badge/Member-Nedurumalli_Ved_Varshith_Reddy-gold) ![](https://img.shields.io/badge/Member-Saride_Someswara_Sai_Sri_Chakri-gold) ![](https://img.shields.io/badge/Member-Rudra_Srilakshmi-gold)</br>
![](https://img.shields.io/badge/SDG-11-darkgreen)</br>
![](https://img.shields.io/badge/Reviewed-14th_Feb_2025-brown) <br/> 
![](https://img.shields.io/badge/-AIC_Raise_Hackathon-brown) <br/>

---

### Problem Statement:
Heavy traffic congestion is increasingly becoming a problem in urban areas, which is a challenge to emergency response systems. Emergency vehicles like ambulances, fire engines, and police cars are often stuck in traffic, delaying their arrival at critical locations. Such delays can have severe consequences, including loss of lives, increased damage to property, and reduced effectiveness of emergency response efforts.Currently, the existing systems of traffic management do not accommodate the needs for the free flow of emergency vehicles, especially in peak hours. This creates tremendous challenges for the emergency services when they have to navigate through roads that are very congested and,therefore, cannot provide help in time. This calls for an innovative solution to address this issue so that emergency vehicles reach their destinations without such delays.

---

### Hardware Requirements:
| Component | Functionality |
| --------- | ------------- |
| ✅ESP32 Microcontroller | Acts as the central processing unit for handling inputs and outputs |
| ✅Sound sensor(KY-038) | Detects sound levels and converts audio signals to electrical signals |
| 7.4V 2200mAh Li-ion Battery Pack | Supplies portable power to the system |
| Voltage Regulator (LM7805) | Ensures a stable voltage supply to components |
| ✅Breadboard | Allows for easy and temporary circuit prototyping |
| Jumper Wires | Connect various components for signal and power transmission |
| RFID Reader and Tags | Facilitates identification and authentication using radio frequency-based technology |
| Noise Calibration Tool(BAFX Products Sound Level Meter) | Measures and calibrates sound levels for accurate sensor operation |


---

### Literature Survey

#### Existing Solutions
Existing solutions rely primarily on RFID technology, which depends solely on tags for emergency vehicle detection.

#### Research Gaps
1. Our approach enhances real-time verification by integrating sound sensors, webcam-based AI verification (COCO-SSD model), and RFID authentication.
2. Additionally, we are expanding the system to support personal emergency vehicles (vehicles carrying individuals with urgent medical needs).
   This can be achieved by implementing a detection algorithm that identifies flashing emergency lights or specific sound signals from these vehicles.
   
---

### Proposed Solution

**Overview**

The proposed system is an IoT-based intelligent traffic management system designed to prioritize emergency vehicles at four-way junctions. The system integrates sound sensors, AI-based image detection, RFID authentication, and ESP32 microcontrollers to detect emergency vehicles in real time and dynamically control traffic signals. By automating traffic clearance, the solution reduces emergency response delays, improving public safety and healthcare outcomes.

**Key Components Used:**

**Sensors & Detection Modules:**
- *KY-038 Sound Sensors:* Detect emergency sirens in real time.  
- *Webcam with COCO-SSD AI Model:* Performs text detection and image recognition to verify emergency vehicles.  
- *RFID Reader & Tags:* Authenticates emergency vehicles as they approach the intersection.
  
**Microcontrollers & Processing Units:** 
- *ESP32 (at sound sensors):* Processes siren detection and triggers AI-based verification.  
- *ESP32 (at traffic controller):* Receives verified data and controls traffic signals accordingly.

**Traffic Control & Power Supply:**
- *Traffic Signal Controller:* Manages signal transitions based on emergency vehicle detection.  
- *7.4V 2200mAh Li-ion Battery Pack:* Provides power for components.  
- *LED Indicators (Red, Yellow, Green):* Indicate signal changes at the intersection.  


  
**Workflow:**

1. *Emergency Vehicle Detection*  
   - Sound sensors(KY-038) detect sirens and send data to the ESP32 (at sensors).  
   - The ESP32 (at sensors) activates the webcam equipped with the COCO-SSD AI model 
   - The AI model verifies the emergency vehicle using text detection and image recognition.
   - Verified data is sent to the ESP32 (at sensors) and then transmitted to the ESP32 (at the traffic controller).

2. *RFID-Based Vehicle Authentication*  
   - As the emergency vehicle reaches the intersection, the RFID reader scans the RFID tag to authenticate it.  
   - The ESP32 at the traffic controller receives the RFID data and confirms vehicle authorization.

3. *Smart Storage and Monitoring:*  
   -  The traffic controller processes all inputs and identifies the lane of the emergency vehicle.
   -  The system turns red signals on all other lanes, while the emergency vehicle’s lane turns green for clearance.
   -  Logs from sound sensors help determine the direction of approach of the emergency vehicle.  
    
4. *Restoring Normal Traffic Flow*  
   - Once the emergency vehicle passes the intersection or the siren stops, the system automatically restores normal traffic flow.
     

**Use Cases:**

The system is designed for the following critical emergency scenarios:

✅Ambulances – Enables quick access to hospitals by detecting siren sounds, emergency signage, and RFID tags.

✅Fire Trucks – Ensures fire trucks reach emergency sites swiftly using the same multi-layered detection approach.

✅Personal Emergency Vehicles – Grants priority clearance for private vehicles carrying individuals in medical emergencies, detected via flashing emergency lights or specific sound patterns.

---

### Architectural Diagram

![IoT_Architecture_Diagram_22](https://github.com/user-attachments/assets/d9b699e3-886b-424c-94cb-ab403aec5e80)

---

### Deliverable

1. *Module 1(ESP32 - Sound):*
   - Detects sirens using sound sensors, activates the AI model for vehicle verification, and transmits data to the traffic controller ESP32.
2. *Module 2(ESP32 - Traffic Controller Unit)*
   - Receives data from the sound processing ESP32, verifies emergency vehicles via RFID, and controls the traffic signals accordingly.
3. *Webcam with AI Model (COCO-SSD)*
   - Identifies emergency vehicles based on text and image pattern detection.
4. *Data Logs of Sound Sensors (KY-038)*
   - Maintains records of detected sirens to determine the lane of approach.
5. *RFID Module (Reader & Tags)*
   - Authenticates emergency vehicles at the intersection before altering traffic lights.
6. *Traffic Light Control System*
   - Manages signal changes to prioritize emergency vehicles.

---

### Sustainable Develpoment Goals (SDGs)
| SDG | Alignment |
|:----|:----------|
| Goal 11 - Sustainable Cities and Communities | It enhances urban safety by enabling faster emergency response through real-time sound detection, saving lives and improving city infrastructure. |



### Collaboration
| Team | Module & Scope |
|:-----|:---------------|
| [IoT#01](https://github.com/Amrita-TIFAC-Cyber-Blockchain/24CYS333-Internet-of-Things/tree/main/Assets/Projects/IoT01) | IoT-Driven Smart Ambulance System for Real-Time Traffic Management and Emergency Response Optimization** |

---

### References
- Bhate, S. V., Kulkarni, P. V., Lagad, S. D., Shinde, M. D., & Patil, S. (2018). **IoT-based intelligent traffic signal system for emergency vehicles**. 2018 *Second International Conference on Inventive Communication and Computational Technologies (ICICCT)*, 788–793. https://doi.org/10.1109/ICICCT.2018.8473210 
