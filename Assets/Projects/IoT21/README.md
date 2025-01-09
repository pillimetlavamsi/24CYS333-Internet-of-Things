# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#21 - IoT-Based Automated Fertilizer Dispensing System for Real-Time Nutrient Optimization in Agriculture

![](https://img.shields.io/badge/Member-Navarang_C_D-gold)  ![](https://img.shields.io/badge/Member-Reddicherla_Thanuj-gold)  ![](https://img.shields.io/badge/Member-Nandana_Mahesh-gold) <br/> 
![](https://img.shields.io/badge/SDG-12-darkgreen) ![](https://img.shields.io/badge/SDG-13-darkgreen) <br/>


### Problem Statement:<br>
Agriculture faces challenges in achieving efficient crop growth while minimizing environmental harm due to inefficient fertilizer application methods. Overuse or underuse of nutrients harms soil health, reduces yields, and increases costs, while excessive runoff leads to water pollution and greenhouse gas emissions. The absence of precise, real-time monitoring and automated solutions exacerbates nutrient imbalances, failing to account for diverse soil conditions and crop requirements. An IoT-Based Automated Fertilizer Dispensing System can address these issues by leveraging smart sensors to monitor soil conditions and automate precise fertilizer delivery, optimizing resource use and promoting sustainable farming practices.

---

### Hardware Requirements:<br>
| Components                             | Purpose                                                                                          |
|:---------------------------------------|:-------------------------------------------------------------------------------------------------|
| NPK Soil Sensor                        | Measures the nutrient levels (Nitrogen, Phosphorus, Potassium) in the soil.  |
| Capacitive Soil Moisture Sensor v1.2   |  Detects the moisture level of the soil to determine irrigation needs.
| Solenoid Valve                         | Controls the flow of water in the irrigation system. |
| GSM Module (SIM800)                    | Enables communication in areas with limited or no Wi-Fi access. |
| Sprayer System                         | Distributes water or nutrients uniformly over the field. |
| Raspberry Pi                           | Acts as the central processing unit for data management and IoT control. |
| Wi-Fi Module (ESP32)                   | Facilitates wireless connectivity for IoT operations.   |
| Battery                                | Provides power to the components for portable and remote use. 

---
### Literature Survey:<br>
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

### Sustainable Development Goals:

| SDG                                                 | Alignment       |
|:----------------------------------------------------|-----------------|
| Goal 12 - Responsible Consumption and Production    |                 |
| Goal 13 - Climate Action                            |                 |

### Collaboration 
| Team   | Module & Scope                 |
|:------:|:-------------------------------|
| IoT#10 | Smart Home Plantation System | 
---



### References:
- Amrutha, A., Lekha, R., Sreedevi, A. (2016). _"Automatic soil nutrient detection and fertilizer dispensary system."_ 
- Kabilan, S., Gunapriya, D., Ragavi Sri, S., Shivagurunathan, A., Thalagandasamy, N. (2024). _"IOT-based soil nutrient monitoring decision system."_ 
- Zainal Abidin, A. I., Fadzil, F. A., Peh, Y. S. (2018). _"Micro-controller based fertilizer dispenser control system."_
<br>

