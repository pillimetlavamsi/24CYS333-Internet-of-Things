# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#12 - Remote Monitoring and Control of Borewell Pumps using IoT


![](https://img.shields.io/badge/Member-Charan_K-gold)  ![](https://img.shields.io/badge/Member-Mukund_Kumarappan_S-gold)  ![](https://img.shields.io/badge/Member-Shravan_Krishnan_G-gold) <br/> 
![](https://img.shields.io/badge/SDG-6-darkgreen) ![](https://img.shields.io/badge/SDG-12-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed--brown)

---
**Problem Statement:**

Borewell pumps are critical for providing water in agriculture, industrial, and domestic sectors especially in remote areas. However, monitoring and controlling these pumps manually is challenging, time-consuming and inefficient. Problems such as pump failures, energy wastage, water overuse and delayed detection of issues lead to increased costs, resource wastage and operational inefficiencies. Current systems lack real-time remote monitoring and automated control capabilities leaving users unable to respond quickly to malfunctions or optimize pump operations.

---
**Hardware requirements:**

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
| Arduino Uno | Acts as an microcontroller.Controls sensors and pump operations. |
| Wi-Fi module (ESP8266) | Enables internet connectivity for remote access. |
| Water level sensor (HC-SR04) | Prevents dry running by monitoring water levels. |
| Pressure sensor (BMP180) | Detects leaks and maintains water flow pressure. |
| Flow meter sensor (YF-S201) | Monitors water usage and flow rate. |
| Relay module (Songle SRD-05VDC-SL-C) | Acts as a switch to remotely control the borewell pump via IoT commands. |
| INVENTO 11.1V-12V 1500 mAh | Provides rechargeable power for electronic devices or projects. |
| 12V DC Motor Pump | Pumps water from the borewell. |

---
**Software requirements:**

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
| Arduino IDE | Develops and uploads code to control sensors and the pump. |
| AWS Cloud Platform | Enables remote monitoring, data storage, and control with real-time analytics. |

---
**Proposed solution:**

The proposed system addresses the challenges of manual monitoring and control of borewell pumps by providing an IoT-based solution for real-time monitoring, automated control, and operational efficiency.

**Core Functionalities:**
- **Continuous Monitoring:**
  - Real-time tracking of water levels in borewell and overhead tanks.
  - Monitoring pump status, energy consumption, and performance metrics.
   
- **Cloud Integration:**
  - Sensor data is uploaded to an AWS cloud platform for remote access, visualization, and analysis.
  - Historical data logs enable better decision-making and resource optimization.

- **Proactive Alerts:**
  - Real-time alerts for critical conditions like dry running, overflow, or pump failures via SMS, email, or push notifications.

- **Automated and Remote Control:**
  - Automated pump operation based on water level thresholds.
  - Remote ON/OFF control via a mobile app or web interface for flexibility.

- **User-Friendly Interface:**
  - Intuitive web/mobile application for both technical and non-technical users to monitor and control the system effectively.

This solution improves efficiency, reduces resource wastage, and enhances the reliability of borewell pump operations, especially in remote areas.

---
**Literature survey**:

Jonthan in Water Tank Depth Sensor revealed concept on switching on automatically
the pumps.This paper creates acquaintance with the preciousness of water resource
and about tank control and makes.Akinlalu addressed the problem related to
find the depth of freshwater boreholes and the recommendation of areas to trace the
location during installation time.Getu proposed a system for finding water levels
automatically and controlling them.Poovizhi proposed a system for water level
monitoring in trains for filling the water tanks in trains optimally.

---
**Mapping the Project to Relevant Sustainable Development Goals (SDGs):**

| SDG | Alignment |
|:-----------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------|
| SDG 6: Clean Water and Sanitation |  Ensures efficient water usage, reduces wastage, and promotes sustainable groundwater management. |
| SDG 12: Responsible Consumption and Production | Optimizes energy and water resource usage, minimizing waste and encouraging sustainable practices. |

 
**Collaboration:**

| Team | Module & Scope |
|:----:|:---------------|
| IoT#03 | Water Contaminant Monitoring | 

---
**References:**
  - Karimisetty, S., Rugada, V. R., & Harshitha, D. (2020). **IoT-based borewell water-level detection and auto-control of submersible pumps.** In Intelligent System Design: Proceedings of Intelligent System Design: INDIA 2019 (pp. 55-61). Singapore: Springer Singapore.
  - Malche, T., & Maheshwary, P. (2017). **Internet of things (IoT) based water level monitoring system for smart village.** In Proceedings of International Conference on Communication and Networks: ComNet 2016 (pp. 305-312). Springer Singapore.





