# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#05 - GPS-Enabled Passenger Safety and Route Monitoring in Taxis with Office Alert Integration

![](https://img.shields.io/badge/Member-Anaswara_Suresh_M_K-gold)  ![](https://img.shields.io/badge/Member-C_S_Amritha-gold)  ![](https://img.shields.io/badge/Member-R.Sruthi-gold) <br/> 
![](https://img.shields.io/badge/SDG-9-darkgreen) ![](https://img.shields.io/badge/SDG-11-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-23rd_Jan_2025-brown) 
---

### Problem Statement
Passenger safety in public transportation, especially for women, remains a significant concern worldwide. Despite advancements in technology, many passengers lack access to immediate and effective ways to signal distress and seek assistance during their journey. To address this issue, there is a need for an IoT-based safety solution integrated into cabs that enables passengers to send instant alerts to the cab operator's office or a central monitoring system. This solution should ensure rapid response and enhance passenger confidence in the safety of the service.

---

### Hardware
| Component                  | Specification                     |Purpose                            |
|----------------------------|-----------------------------------|-----------------------------------|
| Microcontroller/Development Board | Arduino Uno or Arduino Mega |Acts as the central control unit to process data and manage communication between components.|
| GPS Module              | NEO-6M GPS Module                |Tracks the real-time location of the vehicle to ensure passenger safety through monitoring or emergency response.|
| Communication Module    | GSM/GPRS Module                  |Enables data transmission to a remote server or mobile devices for alerts and updates.|
| Both for Communication and Microcontroller | ESP32               |Combines wireless communication (Wi-Fi/Bluetooth) and microcontroller functionality for data handling and connectivity.|
| Speed Sensor            | Reed Switch or Hall Effect Sensor|Monitors the vehicle’s speed to detect overspeeding or potential accidents.|
| Alert Button            | Push Button                      |Allows passengers to manually send emergency alerts in case of danger or mishaps.|
| Power Supply            | Li-ion Battery Pack or Vehicle Power Adapter |Provides necessary power to the entire system for uninterrupted operation.|
| Accelerometer/Gyroscope | MPU6050                          |Detects sudden movements, tilts, or collisions to identify accidents or unsafe driving patterns.|

---

### Literature Survey  
1. **Emergency Route Optimization and Notification Systems**: Geo-IoT and pgRouting, as used by Hataitara et al. (2024), enable real-time route tracking and analysis. This can be adapted to monitor taxi route deviations and alert contacts.<br></br>
2. **Dual-Function Safety Devices**: IoT-enabled devices with buttons and sensors for distinguishing medical emergencies from danger scenarios (IEEE, 2022) provide a foundation for implementing specific triggers for route deviations in passenger safety.<br></br>
3. **IoT Modules for Real-Time Alerts**: GSM (SIM800) and GPS (Neo-6M) modules are effective for real-time location tracking and communication, offering a scalable and cost-efficient solution for sending alerts to contacts or authorities.<br></br>
4. **Portable and Affordable Safety Devices**: The IEEE paper (2022) showcases a wearable safety device that is compact and portable, using low-cost microcontrollers like ATmega2560. This reinforces the idea that your passenger safety device can also remain affordable and easy to carry, enhancing its practicality in low-resource regions.

### Research Gaps
1. Lack of real-time route deviation detection for passenger safety.
2. No direct integration with authorities for emergency intervention.
3. Absence of travel history logging for post-event analysis.
4. Limited scalability for low-cost, portable safety devices.
   
---

### Proposed Solution
1. **Standalone Safety Device:** A compact IoT-based safety tool installed in cabs, designed to enhance passenger security.
2. **Emergency Alert Mechanism:** Passengers can press a button in case of an emergency.The button triggers an immediate alert to the office or a central monitoring system.  
3. **Travel History Logging:** The system records travel routes and history for future analysis.
   
---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs)
| SDG | Alignment |
|:---|:----------|
| Goal 9 - Industry, Innovation, and Infrastructure | Innovate passenger safety systems, enhancing transportation infrastructure. |
| Goal 11 - Sustainable cities and communities | Supports creating safer, smarter transport solutions, promoting sustainable and resilient urban mobility. |

### Collaboration
| Team | Module & Scope |
|:----:|:---------------|
| IoT#7 | Real-Time loT-Driven Public Transport Scheduling and Tracking System | 

---

### References
- Hataitara, R., Piyathamrongchai, K., & Choosumrong, S. (2024). __Development of an emergency notification system to analyze the access route for emergency medical services using Geo-IoT and pgRouting.__ *Applied Geomatics, 16*(2), 441–449. [https://doi.org/10.1007/s12518-024-00557-8](https://doi.org/10.1007/s12518-024-00557-8)
- Yakaiah, P., Bhavani, P., Kumar, B., Masireddy, S., & Elari, P. (2022, November 19). __Design of an IoT-enabled smart safety device.__ *IEEE Conference Publication.* 
 [https://ieeexplore.ieee.org/abstract/document/10088332](https://ieeexplore.ieee.org/abstract/document/10088332)












