# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#10 -  IoT-Enabled Smart Home Plantation System

![](https://img.shields.io/badge/Member-B_Prem_Kumar-gold)  ![](https://img.shields.io/badge/Member-S_Mohana_Vamsi-gold)  ![](https://img.shields.io/badge/Member-Sree_Sharvesh_S_S-gold) <br/> 
![](https://img.shields.io/badge/SDG-11-darkgreen) ![](https://img.shields.io/badge/SDG-12-darkgreen) ![](https://img.shields.io/badge/SDG-15-darkgreen)<br/>
![](https://img.shields.io/badge/Reviewed-08th_Jan_2025-brown) 

---
### Problem Statement
Maintaining healthy plants at home can be challenging, especially for individuals with busy schedules or limited knowledge of plant care. Irregular watering, unsuitable temperature or humidity levels, and inadequate sunlight often lead to poor plant health or even plant death. Manual monitoring of these parameters can be time-consuming and error-prone.

This project addresses these issues by creating an IoT-based solution that automates the process of monitoring and caring for plants. By integrating sensors and actuators, the system ensures plants receive the optimal amount of water, light, and suitable environmental conditions, making plant care efficient and hassle-free.

---
### Hardware Requirements  
| Component                | Purpose                                            |
|--------------------------|----------------------------------------------------|
| **ESP32 Microcontroller** | Provides computation power and connectivity       |
| **Soil Moisture Sensor** | To Monitor the soil moisture levels                |
| **Mini Water Pump**      | Pumps Water to the plants when necessary           |
| **LCD Screen**           | Provides Feedback to the user                      |
| **Light Dependent Resistor (LDR)** | Measures ambient light for optimal plant growth |
| **DHT11 Sensor**         | Monitors temperature and humidity of the surroundings     |
| **LEDs**                 | Indicates system status and alerts                 |
| **LIPO Battery**         | Powers the system                                  |
| **Breadboard and Jumper Wires** | Facilitates prototyping and connections          |

---
### Literacy Survey

#### Exsisting Solutions
- Existing IoT systems monitor environmental parameters like temperature, humidity, and soil moisture for real-time plant condition tracking.
- Some systems assess plant health based on leaf conditions, enhancing monitoring capabilities.
- Many lack advanced features such as predictive watering and automation tailored to plant-specific needs.
- Energy efficiency and portability are often overlooked in current solutions.
- Certain systems emphasize niche aspects like plant-emitted gases or security features, which can complicate core functionalities.

#### Research Gaps
- Lack of integration with mobile applications for real-time remote monitoring and control.
- Limited focus on energy efficiency and portability, which are critical for practical deployment.
- Absence of AI-based predictive analytics for customized watering and lighting schedules.
- Insufficient adaptability to diverse plant species with varying environmental requirements.
---
### Proposed Solution

The system automates plant care using an ESP32 microcontroller with soil moisture, DHT11, and LDR sensors for environmental monitoring. It activates a water pump when soil moisture is low, displays real-time data on an LCD, and uses LEDs for alerts (e.g., low water levels or inadequate sunlight). Powered by a LIPO battery, it ensures portability and energy efficiency. Setup involves assembling hardware, configuring Wi-Fi, and uploading code. Future enhancements include mobile app integration, AI-driven schedules, and support for diverse plant species.  

---
### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG                                      | Alignment                                                                                                         |
|:-----------------------------------------|:------------------------------------------------------------------------------------------------------------------|
| Goal 11 - Sustainable Cities and Communities | Encourages urban households to adopt green practices, contributing to more sustainable and livable cities.    |
| Goal 12 - Responsible Consumption and Production     | Encourages efficient resource use (e.g., water and energy).                                           |
| Goal 15 - Life on Land                               | Supports biodiversity and sustainable ecosystems through improved plant care.                         |

### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#03 | Real Time Water Contaminant Monitoring System for Drinking Water |
| IoT#12 | Water Contaminant Monitoring for Borewell |
---
### References

- Absar, M. H., Mirza, G. F., Zakai, W., John, Y., & Mansoor, N. (2023). **Novel IoT-based plant monitoring system.** _Engineering Proceedings, 32(1), 12_

- Ariyaratne, U. H. D., Vitharana, V., Deelaka, L. H., & Herath, H. M. (2022). **IoT Smart Plant Monitoring, Watering and Security System.** _arXiv preprint arXiv:2202.08153._

- Rane, A., Vidhale, B., Kale, P. H., & Khekare, G. (2022, April). **Design of an IoT based smart plant monitoring system.** _In 2022 10th International conference on emerging trends in engineering and technology-signal and information processing (ICETET-SIP-22) (pp. 1-5). IEEE._
