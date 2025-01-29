# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#024 - IoT-Enabled Air Quality Monitoring System

![](https://img.shields.io/badge/Member-Ramraj_S-gold) ![](https://img.shields.io/badge/Member-R_M_Naren_Adithya-gold)  ![](https://img.shields.io/badge/Member-B_Vijay_Nishanth-gold)  
![](https://img.shields.io/badge/SDG-3-darkgreen) ![](https://img.shields.io/badge/SDG-11-darkgreen) <br/>

---

### Problem Statement
Air pollution, caused by gases like Carbon Dioxide (CO₂) and Carbon Monoxide (CO), significantly impacts human health. These pollutants, often invisible and odorless, can lead to respiratory diseases, reduced cognitive function, and severe health risks over prolonged exposure. Despite its importance, air quality remains under-monitored in most places.

---

### Proposed Solution

The proposed solution is an **IoT-enabled Air Quality Monitoring System**, designed to provide real-time data on air quality, with a focus on CO₂ and CO levels. The system continuously monitors pollutant concentrations, offers cloud integration for remote data analysis, and triggers real-time alerts in case of hazardous conditions.

#### Core Functionalities:
1. **Continuous Monitoring:**  
   - Real-time detection of CO₂ and CO levels using specialized gas sensors.  
   - Display of pollutant concentration in Parts Per Million (PPM) on an LCD screen.

2. **Cloud-Integrated Data Management:**  
   - Data is uploaded to the ThingSpeak IoT platform for remote access, visualization, and analysis.

3. **Proactive Alert Mechanism:**  
   - Triggers audible (buzzer) and visual (LED) alerts when pollutant levels exceed safe thresholds, ensuring timely intervention.

4. **Cost-Effective and Scalable Design:**  
   - Built using affordable, readily available hardware components, making it accessible to a wider audience.

---

### Hardware Requirements

| Components       | Purpose                                       |
|------------------|----------------------------------------------|
| Arduino Uno      | Serves as the central processing unit.        |
| NodeMCU ESP8266  | Enables wireless data transmission.           |
| BME280           | Measures temperature, humidity, and pressure. |
| MQ7              | Detects carbon monoxide (CO).                |
| MQ2              | Detects flammable gases (e.g., propane).     |
| MQ135            | Measures overall air quality.                |
| PMS5003          | Measures particulate matter (PM2.5, PM10).   |
| 16x2 LCD         | Displays real-time pollutant concentrations. |
| Buzzer           | Emits audible alerts for unsafe conditions.  |
| LEDs             | Visual indicators for air quality status.    |

---

### Software Requirements
- **Arduino IDE:** 
- **ThingSpeak:** 

---

### Literature Survey

- Studies integrating sensors like PMS5003 and MQ135 for detecting particulate matter and gases proved effective in real-time monitoring.  
- BME280 sensors provide accurate environmental readings, making them crucial for air quality systems.  
- Low-cost implementations using Arduino and ESP8266 boards are scalable for broader deployment.  
- Combining multiple sensors such as MQ7 and MQ135 offers comprehensive pollutant detection.

---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs)

| SDG | Alignment                                         |
|-----|--------------------------------------------------|
| Goal 3 - Good Health and Well-Being | Promotes healthier environments by monitoring and mitigating harmful air pollutants. |
| Goal 11 - Sustainable Cities and Communities | Contributes to sustainable spaces by encouraging better air quality management practices. |

---

### Key Benefits
- **Health Safeguards:** Reduces the risk of diseases associated with prolonged exposure to air pollution.  
- **Data-Driven Decision-Making:** Enables users to track trends and take informed actions to improve air quality.  
- **Real-Time Alerts:** Provides immediate notifications, ensuring safety and timely remediation in hazardous conditions.  
- **Versatility:** Suitable for use in homes, offices, schools, and healthcare facilities.

---

### Conclusion
The IoT-Based Air Quality Monitoring System is a comprehensive solution to address the critical issue of air quality. It empowers individuals and organizations to ensure healthier and more sustainable environments while aligning with global sustainability goals.

---

### References
1. Gupta, H., Bhardwaj, D., Agrawal, H., Tikkiwal, V. A., & Kumar, A. (2019, February). **An IoT Based Air Pollution Monitoring System for Smart Cities**. _2019 IEEE International Conference on Sustainable Energy Technologies (ICSET)._
2. Medeiros, H. P. L. de ., & Girao, G. (2020, September 28). **An IoT-based Air Quality Monitoring Platform**. _2020 IEEE International Smart Cities Conference (ISC2)._ 
3. Karnati, H. (2023). **IoT-Based Air Quality Monitoring System with Machine Learning for Accurate and Real-time Data Analysis** _(Version 1)._
