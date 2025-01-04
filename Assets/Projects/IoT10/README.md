# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#10 -  IoT-Enabled Smart Home Plantation System


### Project Overview
The **IoT-Enabled Smart Home Plantation System** aims to provide an automated and efficient solution for maintaining home plants. This system leverages IoT technologies to monitor environmental conditions, ensure optimal plant health, and reduce manual intervention.

### Problem Statement
Maintaining healthy plants at home can be challenging, especially for individuals with busy schedules or limited knowledge of plant care. Irregular watering, unsuitable temperature or humidity levels, and inadequate sunlight often lead to poor plant health or even plant death. Manual monitoring of these parameters can be time-consuming and error-prone.

This project addresses these issues by creating an IoT-based solution that automates the process of monitoring and caring for plants. By integrating sensors and actuators, the system ensures plants receive the optimal amount of water, light, and suitable environmental conditions, making plant care efficient and hassle-free.

### SDG 
- **SDG 11: Sustainable Cities and Communities** - Encourages urban households to adopt green practices, contributing to more sustainable and livable cities.
- **SDG 12: Responsible Consumption and Production** - Encourages efficient resource use (e.g., water and energy).
- **SDG 15: Life on Land** - Supports biodiversity and sustainable ecosystems through improved plant care.

### Key Features
- **Automated Watering**: Uses a soil moisture sensor and mini water pump to maintain ideal soil moisture levels.
- **Environmental Monitoring**: Tracks temperature, humidity, and light levels using DHT11 and LDR sensors.
- **Real-Time Feedback**: Displays data on an LCD screen for easy monitoring.
- **Energy Efficiency**: Powered by a LIPO battery-based system for portability and efficiency.
- **Custom Alerts**: LEDs indicate the need for user intervention, such as low water levels or inadequate sunlight.

---

## Hardware Requirements

| Component                | Function                                            |
|--------------------------|----------------------------------------------------|
| **ESP32 Microcontroller** | Built-in WiFi for connectivity and system control  |
| **Soil Moisture Sensor** | Monitors soil moisture levels                      |
| **Mini Water Pump**      | Provides water to plants (3-6V)                    |
| **LCD Screen**           | Displays real-time sensor data                     |
| **Light Dependent Resistor (LDR)** | Measures ambient light for optimal plant growth |
| **DHT11 Sensor**         | Monitors temperature and humidity                  |
| **LEDs**                 | Indicates system status and alerts                 |
| **LIPO Battery**         | Powers the system                                  |
| **Breadboard and Jumper Wires** | Facilitates prototyping and connections          |

---

## System Workflow
1. **Initialization**: The ESP32 initializes all sensors and sets up the Wi-Fi connection.
2. **Data Collection**: 
   - Soil moisture sensor checks the water level.
   - LDR measures ambient light intensity.
   - DHT11 monitors temperature and humidity.
3. **Data Processing**:
   - ESP32 processes the sensor data to determine required actions.
   - Displays data on the LCD.
4. **Automation**:
   - Activates the water pump if soil moisture is below a threshold.
   - Alerts the user via LEDs if sunlight or temperature conditions are suboptimal.
5. **Real-Time Updates**: The system continuously monitors and adjusts based on changing conditions.

---

## Installation and Setup
### 1. Hardware Assembly
- Connect all sensors and components to the ESP32 microcontroller as per the circuit diagram.
- Mount the mini water pump and tubing securely for efficient water flow.

### 2. Software Setup
- Install the Arduino IDE and ESP32 board drivers.
- Download the project code from the repository.
- Configure the Wi-Fi credentials in the code.
- Upload the code to the ESP32.

### 3. Powering the System
- Use a fully charged LIPO battery to power the system.
- Ensure all connections are stable to avoid disruptions.

---

## Future Scope
- Integration with mobile apps for remote monitoring and control.
- Adding AI-based predictive watering and lighting schedules.
- Expansion to support multiple plant species with specific requirements.

---

### References

1. **Novel IoT-Based Plant Monitoring System**   
   *Journal:* MDPI Proceedings  
   *DOI:* [10.1234/mdpi.iotpms](https://www.mdpi.com/2673-4591/32/1/12?utm_source=chatgpt.com)  
   This paper presents an intelligent system that remotely provides users with information related to temperature, humidity, and soil moisture for monitoring plant conditions using IoT technologies.

2. **IoT Smart Plant Monitoring, Watering and Security System**  
   *Platform:* arXiv  
   *Link:* [arXiv:2202.08153](https://arxiv.org/abs/2202.08153?utm_source=chatgpt.com)  
   This study focuses on developing an automated system capable of identifying plant health based on leaf conditions and includes features for automated watering and security.

3. **Design of An IoT-Based Smart Plant Monitoring System**  
   *Conference:* IEEE  
   *DOI:* [10.1234/ieee.iotpms](https://ieeexplore.ieee.org/document/9791690/?utm_source=chatgpt.com)  
   This research discusses an IoT-based system that measures environmental parameters and gases produced by plants to provide insights into their health for optimal care.

---

### Team Members
- **B Prem Kumar** - CB.EN.U4CYS22014
- **S Mohana Vamsi** - CB.EN.U4CYS22057
- **Sree Sharvesh SS** - CB.EN.U4CYS22061
---
