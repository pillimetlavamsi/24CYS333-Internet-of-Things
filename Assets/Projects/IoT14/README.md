# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange)
<br>

# IoT#14 - Real-Time Accident Detection and Alert System

![](https://img.shields.io/badge/Member-G_VETTRIVEL-gold)  ![](https://img.shields.io/badge/Member-LOGESH_R-gold)  ![](https://img.shields.io/badge/Member-RATHNESH_R-gold) <br/> 
![](https://img.shields.io/badge/SDG-3-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen)
<br>
<br>

---

## Problem Statement
Road accidents are a leading cause of fatalities worldwide, with millions of lives lost annually due to delayed emergency response. Traditional accident reporting systems rely heavily on manual communication, which introduces significant delays, especially in remote areas with poor connectivity. This lag in response time can exacerbate the severity of injuries and reduce the chances of survival. Moreover, existing solutions often fail to differentiate between minor vehicle impacts and serious accidents, leading to frequent false positives and inefficient use of emergency resources.

Despite advancements in technology, there remains a critical gap in creating a reliable, real-time system that ensures prompt detection and reporting of accidents while addressing the challenges of accuracy, energy efficiency, and portability.
<br>
<br>

---

## Hardware Requirements
| **Component**                  | **Specification**                                        | **Purpose**                                            |
|--------------------------------|---------------------------------------------------------|-------------------------------------------------------|
| **TTGO T-Call ESP32 SIM800L**  | ESP32-SIM800L                                           | Microcontroller with GSM capabilities for communication. |
| **MPU6050**                    | 6-axis accelerometer and gyroscope (MPU-6050)          | Detects motion and impact for accident detection.     |
| **NEO6M GPS Module**           | NEO-6M                                                 | Provides real-time location tracking.                |
| **Charging Boost Step-up Module** | MT3608, Input: 2-24V, Output: 5-28V                 | Manages power supply and battery charging.           |
| **18650 Battery**              | Rechargeable lithium-ion, 3.7V, 2200mAh               | Provides portable power to the system.               |
| **Push Button and Slide Switch** | Generic                                               | User interface for system control and power toggling. |
| **10k ohm Resistor**           | ±5% tolerance                                          | Stabilizes circuit and voltage levels.               |
| **USB Type-A Connector**       | Type-A                                                 | Used for charging and programming purposes.          |
| **Zero PCB Board**             | 10cm x 5cm                                             | Serves as the base for circuit prototyping.          |
<br>

---

## Literature Survey
### Existing Solutions  
1. **IoT-Based Accident Detection and Tracking Systems**  
   Many existing systems utilize IoT technologies to detect accidents and send alerts. For example:  
   - An IoT-based system integrating **GSM and GPS** to send SMS notifications in case of an accident was proposed in several research papers. These systems rely on sensors like accelerometers to detect significant impacts and notify pre-defined contacts.  
   - Projects like "IoT-Based Accident Detection and Tracking System with Telegram Notification" use Telegram and SMS to enhance the immediacy of alerts while providing location coordinates.  

2. **Accident Detection for Motorbikes**  
   - Systems specifically designed for motorbikes incorporate gyroscopic sensors to detect unusual tilts and falls. For instance, "IoT-Based Accident Detection and Emergency Alert System for Motorbikes" combines GPS modules with GSM capabilities to report incidents.  

3. **Crash Detection Devices**  
   - Commercial systems like **CrashBoxx Accident Alert GPS Tracking Device** analyze crash severity and generate detailed reports. These systems, however, are proprietary and expensive, limiting their widespread adoption.  

4. **Smartphone-Based Solutions**  
   - Mobile apps leveraging accelerometer and GPS sensors in smartphones can also detect accidents. While cost-effective, these systems depend on the user’s phone being functional and adequately powered during an incident.

### Research Gaps  
1. **Accuracy in Accident Detection**  
   - Many existing solutions struggle with differentiating between minor impacts (e.g., speed bumps or potholes) and actual accidents, leading to frequent false positives. There is a need for advanced algorithms or AI-based threshold tuning to enhance detection accuracy.  

2. **Real-Time Data Sharing**  
   - Most current systems rely on SMS-based notifications, which can be slower and less reliable compared to IoT platforms like **Blynk** or **Firebase**. There is limited integration of real-time data sharing platforms in these systems.  

3. **Energy Efficiency**  
   - Existing systems often lack robust power management, which limits their portability and usability in real-world applications. A system optimized for energy efficiency is essential for continuous operation, especially in remote areas.  

4. **Limited Scalability**  
   - Solutions often focus on specific vehicle types (e.g., cars or motorbikes) but fail to provide a unified framework adaptable across different modes of transportation.  

5. **Integration with Emergency Services**  
   - Few systems provide automatic integration with emergency response teams or hospitals. A reliable connection to such services can drastically improve response times and outcomes.  

6. **Cost-Effectiveness**  
   - Proprietary solutions or high-cost implementations restrict adoption, particularly in low-income or rural regions. A cost-effective, open-source framework is crucial for wider deployment.
<br>
<br>

---

## Proposed Solution
To address these limitations, this project introduces an IoT-based Real-Time Accident Detection and Alert System that revolutionizes emergency response mechanisms. The system employs an MPU6050 accelerometer and gyroscope sensor to detect high-impact collisions and significant motion changes accurately. Location tracking is enabled via a NEO6M GPS module, ensuring precise geographic data.

The TTGO T-Call ESP32 SIM800L microcontroller integrates GSM communication, automatically alerting emergency contacts via phone calls and the Blynk IoT platform. This solution minimizes false positives through calibrated motion thresholds and ensures uninterrupted operation with a compact, energy-efficient rechargeable battery system.

By bridging the gaps in existing systems, this solution provides a reliable, scalable, and user-friendly platform that significantly reduces emergency response times and enhances road safety.
<br>

---

## Mapping the Project to Relevant Sustainable Development Goals (SDGs)
| SDG | Alignment |
|:---|:----------|
| Goal 3 - Good Health and Well-being | Prompts immediate response, thereby saves lives and improves healthcare outcomes. |
| Goal 9 - Industry, Innovation, and Infrastructure | Innovation in accident detection systems and enhancement of transportation safety infrastructure. |
<br>

---

## References
- Razali, S. N., Fariza Abu Samah, K. A., Ahmad, M. H., & Riza, L. S. (2021, December 1). **IoT Based Accident Detection And Tracking System With Telegram and SMS Notifications.** 2021 6th IEEE International Conference on Recent Advances and Innovations in Engineering (ICRAIE). IEEE. https://ieeexplore.ieee.org/abstract/document/9703970

- Ur Rehman, S., Khan, S. A., Arif, A., & Khan, U. S. (2021, April 28). **IoT-based Accident Detection and Emergency Alert System for Motorbikes.** 2021 International Conference on Artificial Intelligence and Mechatronics Systems (AIMS). https://ieeexplore.ieee.org/abstract/document/9466055
<br>

---
