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
1. Arduino Uno: Serves as the main microcontroller that processes inputs from sensors and sends control signals to the relay module for operating the pump.
2. Wi-Fi module ESP8266: It connects the Arduino to the internet, enabling remote communication between the system and the user.
3. Water level sensor(HC-SR04): Measures the water level in the borewell to prevent dry running and ensure efficient pump operation.
4. Pressure sensor(BMP180): Monitors water pressure to detect leaks or maintain optimal flow.
5. Flow meter sensor(YF-S201): Tracks water flow rate to measure usage and detect anomalies like overflows.
6. Relay module:  Acts as a switch to control the DC motor pump based on the microcontroller’s commands.
7. 12V DC Motor Pump: Pumps water from the borewell to the desired location
8. 5V DC Power supply: Provides the necessary electrical power to the entire system, including the Arduino, sensors, Wi-Fi module, and pump.

---
**Software requirements:**
1. Arduino IDE: Programs and uploads code to microcontrollers for integrating and controlling sensors.
2. AWS Cloud platform: Provides remote data storage, real-time monitoring, and control of borewell pumps through analytics and dashboards.

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

The study by Udhaya Kumar C highlights the potential of IoT-based Bore Well Monitoring Systems in addressing groundwater challenges, particularly in agriculture. By integrating sensors and microcontrollers like Arduino Uno and NodeMCU, these systems enable real-time monitoring of water levels, leakage, and usage through smartphone applications such as Blynk. Traditional bore well monitoring methods in India, such as manual measurements, are time-consuming, inaccurate, and require on-site presence, necessitating innovative solutions for improved efficiency. While GSM and SMS-based systems have been used, they lack real-time analysis and comprehensive data integration. Recent IoT advancements provide automated and scalable solutions, reducing manpower and enabling precise monitoring of parameters like water levels, flow rates, and leaks. The proposed system offers predictive analytics, empowering farmers to manage water resources efficiently and sustainably, thereby addressing critical groundwater management issues in agrarian economies.

---
**Sustainable Development Goals(SDGs):**
- **SDG 6: Clean Water and Sanitation**

  Ensures efficient water usage, reduces wastage, and promotes sustainable groundwater management.
  
- **SDG 12: Responsible Consumption and Production**

  Optimizes energy and water resource usage, minimizing waste and encouraging sustainable practices.

 ---
**Collaboration:**

| Team | Module & Scope |
|:----:|:---------------|
| IoT#03 | Water Contaminant Monitoring | 


**References:**
  - https://ijsrd.com/articles/IJSRDV8I70141.pdf - IoT Based BoreWell Monitoring System
  - https://www.researchgate.net/publication/334399396_Internet_of_Things_Based_Autonomous_Borewell_Management_System - IoT Based Autonomous Borewell Management System





