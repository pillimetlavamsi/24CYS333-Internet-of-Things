# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#03 - Real Time Water Contaminant Monitoring System for Drinking Water

![](https://img.shields.io/badge/Member-Agil_Prasanna_P-gold)  ![](https://img.shields.io/badge/Member-Amal_Ritessh_A_P-gold)  ![](https://img.shields.io/badge/Member-Ananth_R-gold) <br/> 
![](https://img.shields.io/badge/SDG-6-darkgreen) ![](https://img.shields.io/badge/SDG-3-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-16th_Feb_2025-brown) 

---
### Problem Statement
 Ensuring the safety and quality of water is critical for public health and environmental sustainability. Traditional water testing methods are slow and lack real-time insights, making it difficult to address contamination promptly.

 This project aims to develop an IoT-based solution for real-time monitoring and analysis of water quality in diverse contexts, including drinking water supplies, household water systems, public water tanks, and agricultural water sources.

 By leveraging advanced sensors, data analytics, and cloud connectivity, the system will track parameters such as pH, turbidity, and contaminant levels, providing instant alerts on water quality issues. This enables proactive interventions to ensure safety, improve resource management, and maintain compliance with health and environmental standards across various applications.

---
 ### Hardwares Required

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
| LED Display SSD1306  | Displays visual data like text or graphics in a compact format. |
| ESP32 Board              | Acts as a microcontroller for IoT operations, enabling connectivity and real-time data collection. |
| ELECROW Crowtail- PH Sensor    | Measures the pH level of a solution to determine its acidity or alkalinity. |
| Turbidity Sensor             | Detects water clarity by measuring suspended particles. |
| Analog TDS Sensor Water Conductivity Sensor Module Board Kit  | Measures the total dissolved solids (TDS) in water to assess its quality. |
| 5V active Alarm Buzzer Module    | Produces an audible alarm for alerts or notifications. |
| INVENTO 11.1V-12V 1500 mAh               | Provides rechargeable power for electronic devices or projects. |
| DS18B20 Waterproof| Measures temperature in environments that may involve liquids or moisture. |

---
 ### Literature Survey
 Existing IoT-based water quality monitoring systems typically focus on basic parameters like pH and TDS, using microcontrollers such as Arduino or ESP32 for real-time data transmission and platforms like ThingSpeak for visualization. However, they lack advanced analytics, monitor limited parameters, face scalability and energy efficiency challenges, and often neglect IoT security. Our project addresses these gaps by integrating predictive analytics to provide early warnings for contamination, expanding monitoring to include microbial content, heavy metals, and agricultural contaminants like nitrates and phosphates. Additionally, we aim to design scalable, energy-efficient solutions, such as solar-powered systems, suitable for diverse applications like drinking water, household systems, public water tanks, and agriculture. Robust IoT security measures will also ensure secure data transmission.


---
 ### Proposed Solution
- The proposed system utilizes IoT-enabled sensors to continuously monitor pH levels
and contaminant concentrations in real time.
- The collected data is transmitted to a cloud platform for analysis, where AI-driven
algorithms identify anomalies and provide actionable insights.
- Users receive instant alerts via a mobile app or dashboard, allowing for timely
interventions. This solution ensures efficient water quality management, promotes
public health safety, and meets regulatory compliance.

---
 ### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 

| SDG | Alignment |
|:-----------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------|
| SDG 6: Clean Water and Sanitation | Ensuring access to safe and clean drinking water is a core aspect of this goal. Real-time monitoring and analysis of water quality directly contribute to achieving targets related to improving water safety and reducing contamination. |
| SDG 3: Good Health and Well-Being | Safe drinking water is essential for preventing waterborne diseases, thus promoting good health and reducing mortality rates. This IoT-based solution supports public health initiatives by minimizing risks associated with unsafe water. |

### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#10 | Water Contaminant Monitoring for Home Plantation System | 
| IoT#12 | Water Contaminant Monitoring for Borewell |

---
 ### References
 - Mathew, B. K., Chacko, F. M., Nikhil, A., Shilu, S. K., & Sreelakshmi, S. (2023, December). **Intelligent IoT-Based Real-Time Water Quality Monitoring and Pollution Detection System**. _In 2023 International Conference on Innovative Computing, Intelligent Communication and Smart Electrical Systems (ICSES)_ (pp. 1-7). IEEE.
- Abidin, Z., Maulana, E., Nurrohman, M. Y., & Wardana, F. C. (2022, August). **Real time monitoring system of drinking water quality using internet of things**. _In 2022 International Electronics Symposium (IES)_ (pp. 131-135). IEEE. 
