# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#023 - IoT-Based Smart Lighting System for Adaptive Brightness, Motion Detection, and Energy Conservation

![](https://img.shields.io/badge/Member-Pavan_Shanmukha_Madhav_Gunda-gold)  
![](https://img.shields.io/badge/Member-Anurag_Reddy-gold)  
![](https://img.shields.io/badge/Member-Vishal_RS-gold)  
![](https://img.shields.io/badge/SDG-7-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) ![](https://img.shields.io/badge/SDG-11-darkgreen) ![](https://img.shields.io/badge/SDG-12-darkgreen)   


---

### Problem Statement
Conventional lighting systems are energy-intensive and lack adaptive features, resulting in wasted energy and increased costs. Automating these systems with IoT technologies can significantly enhance energy efficiency by dynamically adjusting lighting based on motion detection and ambient brightness.

---

### Hardware Requirements

| Components         | Purpose                                               |
|:--------------------|:-----------------------------------------------------|
| ESP32              | Central controller for system operations             |
| PIR Sensor         | Detects motion to activate/deactivate lighting        |
| LDR Sensor         | Measures ambient light for adaptive brightness        |
| LED Bulb           | Primary light source                                  |
| 5V/3.3V Power Adapter | Provides stable power supply                      |
| IR Sensor          | Additional motion detection                           |
| Relay Module       | Controls LED bulb state                               |
| Voltage Regulators | Ensures consistent power to all components            |
| Jumper Wires/Breadboard | Facilitates circuit connections during testing  |
| PMIC               | Manages and regulates power distribution              |

---

### Literature Survey

#### Existing Solutions
- **IoT-Driven Automation:** Existing systems automate street lighting based on ambient light or schedules but often lack motion-detection capabilities.  
- **Energy Monitoring Dashboards:** Solutions provide energy consumption metrics but rarely combine them with adaptive control mechanisms.  
- **Research Gap:** Limited solutions integrate real-time energy monitoring, motion detection, and adaptive brightness in a unified system.  

---

### Proposed Solution

#### Key Features
1. **Motion-Activated Lighting:** Ensures energy efficiency by turning lights on only when needed.  
2. **Adaptive Brightness Control:** Dynamically adjusts lighting intensity based on ambient light.  
3. **Energy Dashboard:** Displays real-time energy savings and usage metrics.  
4. **IoT Integration:** Enables seamless monitoring and control of the lighting system remotely.  

#### Benefits
- Enhances energy efficiency by reducing unnecessary energy use.  
- Encourages responsible resource consumption through actionable insights.  
- Supports sustainability goals by minimizing the environmental footprint.  

---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs)

| SDG | Alignment                                                                 |
|:----|:-------------------------------------------------------------------------|
| Goal 7 - Affordable and Clean Energy    | Optimizes energy use, reducing costs and waste.       |
| Goal 9 - Industry, Innovation, and Infrastructure | Promotes innovative IoT-driven solutions.         |
| Goal 11 - Sustainable Cities and Communities | Reduces urban energy consumption, promoting sustainability. |
| Goal 12 - Responsible Consumption and Production | Encourages efficient resource utilization.        |

### References

- Nookala Venu (September 2023).IoT based Real Time Street Lights controlling on Motion Detection.ResearchGate.12(9):270-287
