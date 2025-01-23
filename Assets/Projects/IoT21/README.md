# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#21 - IoT-Based Automated Fertilizer Dispensing System for Real-Time Nutrient Optimization in Agriculture

![](https://img.shields.io/badge/Member-Navarang_C_D-gold)  ![](https://img.shields.io/badge/Member-Reddicherla_Thanuj-gold)  ![](https://img.shields.io/badge/Member-Nandana_Mahesh-gold) <br/> 
![](https://img.shields.io/badge/SDG-12-darkgreen) ![](https://img.shields.io/badge/SDG-13-darkgreen) <br/>


### Problem Statement<br>
Agriculture faces challenges in achieving efficient crop growth while minimizing environmental harm due to inefficient fertilizer application methods. Overuse or underuse of nutrients harms soil health, reduces yields, and increases costs, while excessive runoff leads to water pollution and greenhouse gas emissions. The absence of precise, real-time monitoring and automated solutions exacerbates nutrient imbalances, failing to account for diverse soil conditions and crop requirements. An IoT-Based Automated Fertilizer Dispensing System can address these issues by leveraging smart sensors to monitor soil conditions and automate precise fertilizer delivery, optimizing resource use and promoting sustainable farming practices.

---

### Hardware Requirements:<br>
| Components                             | Purpose                                                                                          |
|:---------------------------------------|:-------------------------------------------------------------------------------------------------|
| NPK Soil Sensor                        | Measures the nutrient levels (Nitrogen, Phosphorus, Potassium) in the soil.  |
| Capacitive Soil Moisture Sensor v1.2   | Detects the moisture level of the soil to determine irrigation needs.
|12V DC Plastic Solenoid Valve           | Controls the flow of water in the irrigation system. |
| GSM Module (SIM800L)                   | Enables communication in areas with limited or no Wi-Fi access. |
| Raspberry Pi                           | Acts as the central processing unit for data management and IoT control. |
| Wi-Fi Module (ESP32)                   | Facilitates wireless connectivity for IoT operations.   |
| Battery (INVENTO 11.1V-12V 1500 mAh)   | Provides power to the components for portable and remote use.|
| 12V Mini Water Pump                    | Provides water and aids in the automated delivery of water-soluble fertilizers. |
---
### Literature Survey<br>
#### Existing Solutions:
Existing solutions in IoT-enabled smart farming focus on precision agriculture and resource optimization.

- Smart Fertilizer Systems: Use soil nutrient sensors and automated dispensers to optimize fertilizer usage, triggered by soil moisture and nutrient levels to minimize wastage.<br>
- Cloud-Connected Platforms: IoT tools like ThingSpeak and AWS IoT enable remote monitoring of soil health and fertilizer use via dashboards.<br>
- AI Integration: Predictive models analyze historical data to anticipate crop needs and optimize nutrients proactively.<br>
- Wireless Communication: Protocols such as MQTT and LoRaWAN facilitate real-time data transmission for efficient farming.<be>

#### Challenges Identified:<br>
1. Sensor Calibration: Ensuring sensor accuracy and reliability under varying environmental conditions.<br>
2. Interoperability: Integrating hardware and software components seamlessly.<br>
3. Data Latency: Ensuring real-time responsiveness for dispensing mechanisms.<br>
4. Energy Management: Balancing power consumption for extended deployments.<br>
---

### Proposed Solution 
  
The proposed solution involves the system will use an NPK sensor to monitor soil nutrient levels (Nitrogen, Phosphorus, Potassium) and a capacitive soil moisture sensor to assess water content. Based on the sensor readings, the system will refer to a predefined table to determine the type and ratio of fertilizers required. The selected fertilizer solution will then be distributed through a drip irrigation system. Data collection and irrigation/fertilizer dispensing will occur at regular intervals, controlled by a Raspberry Pi.

---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs)

| SDG                                                 | Alignment                                                                                              |
|:----------------------------------------------------|--------------------------------------------------------------------------------------------------------|
| Goal 12 - Responsible Consumption and Production    |  Optimizes fertilizer use, reduces waste, and promotes sustainable farming practices                   |
| Goal 13 - Climate Action                            | Reduces fertilizer runoff, lowers greenhouse gas emissions, and promotes climate-resilient agriculture |

### Collaboration 
| Team   | Module & Scope                 |
|:------:|:-------------------------------|
| IoT#10 | Smart Home Plantation System   | 
---



### References:
- Amrutha, A., Lekha, R., & Sreedevi, A. (2016, December). **Automatic soil nutrient detection and fertilizer dispensary system**. _In 2016 International Conference on Robotics: Current Trends and Future Challenges (RCTFC)_ (pp. 1-5). IEEE.
- Kabilan, S., Gunapriya, D., Shivagurunathan, A., & Thalagandasamy, N. (2024, March). **IOT-Based Soil Nutrient Monitoring Decision System**. _In 2024 10th International Conference on Advanced Computing and Communication Systems (ICACCS)_ (Vol. 1, pp. 2297-2301). IEEE.
- Abidin, A. I. Z., Fadzil, F. A., & Peh, Y. S. (2018, November). **Micro-controller based fertilizer dispenser control system**. _In 2018 IEEE Conference on Wireless Sensors (ICWiSe)_ (pp. 17-22). IEEE.
<br>

