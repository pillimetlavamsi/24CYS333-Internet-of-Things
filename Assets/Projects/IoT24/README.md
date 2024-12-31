# 24CYS333 - Internet of Things  
![Batch](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![UG](https://img.shields.io/badge/UG-blue) ![Subject](https://img.shields.io/badge/Subject-IoT-blue)  
![Lecture](https://img.shields.io/badge/Lecture-2-orange) ![Practical](https://img.shields.io/badge/Practical-3-orange) ![Credits](https://img.shields.io/badge/Credits-3-orange)  

---

## IoT-Based Indoor Air Pollution Monitoring System

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
1. **Arduino Uno**: Serves as the central microcontroller for data processing and control.
2. **Node-MCU ESP8266**: Provides Wi-Fi connectivity for data transmission to cloud platforms.
3. **16x2 LCD**: Displays real-time air quality readings in parts per million (PPM).
4. **MQ135 Gas Sensor**: Measures indoor air quality by detecting gases like ammonia, nitrogen oxides, and benzene.
5. **MQ7 LPG Gas Sensor**: Detects carbon monoxide (CO) levels, ensuring safety against this toxic gas.
6. **Buzzer**: Emits audible alerts when pollutant levels exceed predefined thresholds.
7. **LEDs**: Visually indicate air quality status through color-coded signals.

### Software Requirements
1. **Arduino IDE**: Used for programming the Arduino Uno and Node-MCU ESP8266 boards, facilitating sensor integration and data handling.
2. **ThingSpeak**: A cloud-based platform for monitoring and analyzing air quality data in real-time.

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
