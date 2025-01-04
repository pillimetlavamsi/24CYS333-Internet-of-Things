# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

# IoT#14 - Real-Time Accident Detection and Alert System

## Problem Statement
Road accidents are a leading cause of fatalities worldwide, with millions of lives lost annually due to delayed emergency response. Traditional accident reporting systems rely heavily on manual communication, which introduces significant delays, especially in remote areas with poor connectivity. This lag in response time can exacerbate the severity of injuries and reduce the chances of survival. Moreover, existing solutions often fail to differentiate between minor vehicle impacts and serious accidents, leading to frequent false positives and inefficient use of emergency resources.

Despite advancements in technology, there remains a critical gap in creating a reliable, real-time system that ensures prompt detection and reporting of accidents while addressing the challenges of accuracy, energy efficiency, and portability.
<br>
<br>

---

## Hardware Requirements
| Component                      | Function                                                | Specification or Part Number  |
|--------------------------------|---------------------------------------------------------|------------------------------ |
| **TTGO T-Call ESP32 SIM800L**  | Microcontroller with GSM capabilities for communication | ESP32-SIM800L                 |
| **MPU6050**                    | Accelerometer and gyroscope sensor for motion detection | MPU-6050                      |
| **NEO6M GPS Module**           | Real-time location tracking                             | NEO-6M                        |
| **Charging Boost Step-up Module** | Manages power supply and battery charging            | MT3608, Input: 2-24V, Output: 5-28V |
| **18650 Battery**              | Rechargeable lithium-ion battery for power              | 3.7V, 2200mAh                 |
| **Push Button and Slide Switch** | User interface and power control                      | Generic                       |
| **10k ohm Resistor**           | Circuit stabilization                                   | ±5% tolerance                 |
| **USB Type-A Connector**       | For charging and programming                            | Type-A                        |
| **Zero PCB Board**             | Prototyping and circuit assembly                        | 10cm x 5cm                    |

<br>

---

## Proposed Solution
To address these limitations, this project introduces an IoT-based Real-Time Accident Detection and Alert System that revolutionizes emergency response mechanisms. The system employs an MPU6050 accelerometer and gyroscope sensor to detect high-impact collisions and significant motion changes accurately. Location tracking is enabled via a NEO6M GPS module, ensuring precise geographic data.

The TTGO T-Call ESP32 SIM800L microcontroller integrates GSM communication, automatically alerting emergency contacts via phone calls and the Blynk IoT platform. This solution minimizes false positives through calibrated motion thresholds and ensures uninterrupted operation with a compact, energy-efficient rechargeable battery system.

By bridging the gaps in existing systems, this solution provides a reliable, scalable, and user-friendly platform that significantly reduces emergency response times and enhances road safety.
<br>
<br>

---

## Sustainable Development Goals (SDG)
This project aligns with the following United Nations Sustainable Development Goals:

1. **Goal 3: Good Health and Well-being**  
   By providing timely accident detection and alerting, this project ensures prompt emergency response, thereby saving lives and improving healthcare outcomes.

2. **Goal 9: Industry, Innovation, and Infrastructure**  
   Leveraging IoT technologies, this project promotes innovation in accident detection systems and enhances transportation safety infrastructure.
<br>

---

## References
- **Paper 1: ”IoT Based Accident Detection And Tracking System With Telegram and
SMS Notifications” (2021)**
https://ieeexplore.ieee.org/abstract/document/9703970

- **Paper 2: ”IoT-based Accident Detection and Emergency Alert System for
Motorbikes” (2021)**
https://ieeexplore.ieee.org/abstract/document/9466055
<br>

---

## Team Members
- **G VETTRIVEL** - CB.EN.U4CYS22024  
- **LOGESH R** - CB.EN.U4CYS22036  
- **RATHNESH R** - CB.EN.U4CYS22053  
<br>

---
