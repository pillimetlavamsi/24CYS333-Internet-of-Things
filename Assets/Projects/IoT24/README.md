# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

---

# IoT#024 - IoT Enabled Air Quality Monitoring System


---

## Team Information  

 **Team Members:**  
  1. **Ramraj S**  
     *Roll Number:* CB.EN.U4CYS22055  
  2. **R M Naren Adithya**  
     *Roll Number:* CB.EN.U4CYS22050 
  3. **B Vijay Nishanth**  
     *Roll Number:* CB.EN.U4CYS22074 

---

### Problem Statement
Indoor air pollution, caused by gases like Carbon Dioxide (CO₂) and Carbon Monoxide (CO), significantly impacts human health. These pollutants, often invisible and odorless, can lead to respiratory diseases, reduced cognitive function, and severe health risks over prolonged exposure. Despite its importance, indoor air quality remains under-monitored in most households and workplaces.

### Proposed Solution
The proposed solution is an **IoT-enabled Indoor Air Pollution Monitoring System**, designed to provide real-time data on air quality, with a focus on CO₂ and CO levels. The system continuously monitors pollutant concentrations, offers cloud integration for remote data analysis, and triggers real-time alerts in case of hazardous conditions.

**Core functionalities:**
- **Continuous Monitoring:**
  - Real-time detection of CO₂ and CO levels using specialized gas sensors.
  - Display of pollutant concentration in Parts Per Million (PPM) on an LCD screen.

- **Cloud-Integrated Data Management:**
  - Data is uploaded to the ThingSpeak IoT platform for remote access, visualization, and analysis.

- **Proactive Alert Mechanism:**
  - Triggers audible (buzzer) and visual (LED) alerts when pollutant levels exceed safe thresholds, ensuring timely intervention.

- **Cost-Effective and Scalable Design:**
  - Built using affordable, readily available hardware components, making it accessible to a wider audience.

### Hardware Requirements  

1. **Microcontroller:**  
   - Arduino Uno: Serves as the central processing unit for data collection and control.  
2. **WiFi Module:**  
   - NodeMCU ESP8266: Enables wireless data transmission to cloud platforms.  
3. **Sensors:**  
   - BME280: Measures temperature, humidity, and atmospheric pressure.  
   - MQ7: Detects carbon monoxide (CO).  
   - MQ2: Detects flammable gases like propane and methane.  
   - MQ135: Measures overall air quality by detecting harmful gases such as ammonia, benzene, and nitrogen oxides.  
   - PMS5003: Measures particulate matter (PM2.5 and PM10).  
4. **Display:**  
   - 16x2 LCD: Displays real-time pollutant concentrations and environmental conditions.  
5. **Alert Components:**  
   - Buzzer: Emits audible alerts for unsafe conditions.  
   - LEDs: Visual indicators for air quality status.
  
### Software Requirements
1. **Arduino IDE**: Used for programming the Arduino Uno and Node-MCU ESP8266 boards, facilitating sensor integration and data handling.
2. **ThingSpeak**: A cloud-based platform for monitoring and analyzing air quality data in real-time.

### Literature Survey  

Studies on IoT-based air quality monitoring systems reveal:  

1. Integration of sensors such as PMS5003 and MQ135 for detecting particulate matter and gases proved effective in real-time monitoring.  
2. BME280 sensors were shown to provide accurate environmental conditions, making them integral to air quality systems.  
3. Low-cost implementations using Arduino and ESP8266 proved scalable for wider deployment.  
4. Combining multiple sensors like MQ7 and MQ135 offered comprehensive pollutant detection.  


### Alignment with Sustainable Development Goals (SDGs)
- **SDG 3: Good Health and Well-Being**  
  Promotes healthier indoor environments by monitoring and mitigating harmful air pollutants.

- **SDG 11: Sustainable Cities and Communities**  
  Contributes to the development of sustainable indoor spaces by encouraging better air quality management practices.

### Key Benefits
- **Health Safeguards**: Reduces the risk of diseases associated with prolonged exposure to air pollution.
- **Data-Driven Decision-Making**: Enables users to track trends and take informed actions to improve air quality.
- **Real-Time Alerts**: Provides immediate notifications, ensuring safety and quick remediation in case of hazardous conditions.
- **Versatility**: Suitable for use in homes, offices, schools, and healthcare facilities.

### Conclusion
The IoT-Based Indoor Air Pollution Monitoring System is a comprehensive solution for addressing the critical issue of indoor air quality. It empowers individuals and organizations to take control of their living and working environments, ensuring healthier and more sustainable indoor spaces while aligning with global sustainability goals.

### References  

1. Kumar, S., Gupta, A., & Rana, S. (2020). "IoT-based air pollution monitoring system using Arduino."  
2. Singh, P., & Chaturvedi, R. (2019). "Integration of gas sensors for real-time air quality monitoring using cloud platforms."  
3. Alharbi, N., Abdulrahman, A., & Mohammad, M. (2021). "Comparative analysis of air quality monitoring systems with IoT and cloud technology."
