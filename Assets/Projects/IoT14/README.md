# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#14

# IoT-Based Real-Time Accident Detection and Alert System

## Problem Statement
Road accidents remain one of the leading causes of fatalities worldwide, with timely emergency response being crucial to saving lives. Traditional accident reporting systems, reliant on manual communication, often result in significant delays, particularly in remote or low-visibility areas.

This project proposes the development of an IoT-based Real-Time Accident Detection and Alert System. The system employs an MPU6050 accelerometer and gyroscope sensor to detect accidents by analyzing impact thresholds and motion patterns. A NEO6M GPS module ensures accurate location tracking, while the TTGO T-Call ESP32 SIM800L module facilitates automated alerts to emergency contacts via phone calls and the Blynk IoT platform.

The design emphasizes reliability, compactness, and energy efficiency, incorporating a rechargeable battery system to ensure uninterrupted operation. By reducing false positives and improving response times, this solution bridges critical gaps in existing systems and significantly enhances emergency care.

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

---

## Sustainable Development Goals (SDG)
This project aligns with the following United Nations Sustainable Development Goals:

1. **Goal 3: Good Health and Well-being**  
   By providing timely accident detection and alerting, this project ensures prompt emergency response, thereby saving lives and improving healthcare outcomes.

2. **Goal 9: Industry, Innovation, and Infrastructure**  
   Leveraging IoT technologies, this project promotes innovation in accident detection systems and enhances transportation safety infrastructure.

---

## Team Members
- **VETTRIVEL G** - CB.EN.U4CYS22024  
- **LOGESH R** - CB.EN.U4CYS22036  
- **RATHNESH R** - CB.EN.U4CYS22053  

---
