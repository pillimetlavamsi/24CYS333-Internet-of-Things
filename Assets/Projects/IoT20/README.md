# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#20 -  IoT-Enabled Sleep Monitoring System for Analyzing Sleep Patterns

![](https://img.shields.io/badge/Member-N_Meera-gold)  ![](https://img.shields.io/badge/Member-Kolluru_Sai_Supraj-gold)  ![](https://img.shields.io/badge/Member-Amita_Naryanan_Kutty-gold) <br/> 
![](https://img.shields.io/badge/SDG-3-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) <br/>

---
### Problem Statement
Elderly individuals often face challenges in maintaining healthy sleep patterns, which are critical for overall well-being. Monitoring sleep quality and health parameters in real-time is essential for early detection of potential health issues and ensuring timely intervention. However, there is a lack of accessible and user-friendly systems that can track sleep patterns, estimate sleep quality, and provide actionable insights while also offering emergency support in case of sudden anomalies in health metrics like heart rate. We plan to develop an Elderly Sleep Monitoring System that analyzes sleep patterns by estimating REM sleep from heart rate data, evaluates sleep quality, and maintains a detailed record of sleep parameters. The system will provide monthly updates and an intuitive dashboard to visualize these metrics. Additionally, it will include a feature to contact emergency services in case of abrupt heart rate anomalies to ensure safety and prompt medical attention.

---
### Hardware Requirements

| Sensor                          | Specification                       | Purpose                              |  
|-------------------------------- |------------------------------------ |--------------------------------------|  
| Heart Rate Sensor               | MAX30100 or MAX30102                | Measuring heart rate using PPG       |   
| Wearable Housing                | Device band                         | Providing portability and comfort    |  
| Power Supply                    | Rechargeable lithium-ion batteries  | Powering the wearable device         |  
| Gyroscope                       | MPU6050                             | Detecting orientation and movement   |  
| Display                         | LED display                         | Providing visual feedback to users   |  



---
### Literature Survey  

### Existing Solutions  

Current methods addressing sleep monitoring and health status tracking include:  
- *Polysomnography (PSG):* The gold standard for sleep measurement, conducted in specialized laboratories with multiple sensors and cables. Despite its accuracy, PSG is intrusive, requires patients to remain in one posture overnight, and disrupts natural sleep patterns.  
- *IoT-Based Sleep Monitoring:* Emerging systems present non-intrusive, inexpensive, and portable alternatives for remote health monitoring. These solutions leverage IoT.

### Research Gaps  
1. *Intrusiveness of Current Methods:* Existing gold-standard techniques like PSG are cumbersome and impractical for daily or long-term use due to their setup complexity.  
2. *Lack of Wearable Integration:* Few IoT-based solutions incorporate wearables that focus on indirect sleep monitoring metrics, such as REM detection through heartbeat tracking.  
3. *Backup Mechanisms:* Limited efforts include respiratory monitoring as a secondary layer for ensuring robust sleep abnormality detection.  
---

### Proposed Solution 

#### Relevance of Proposed Work  
1. *Sleep Pattern Analysis:* The system uses heart rate data to estimate REM sleep, leveraging algorithms to analyze sleep cycles and detect irregularities in sleep patterns.
2. *Comprehensive Sleep Quality Evaluation:* Sleep quality will be assessed based on parameters such as sleep duration, REM-to-non-REM ratio, and interruptions, providing actionable insights for improving sleep health.
3. *Real-Time Health Monitoring:* Integrated sensors will continuously track heart rate and respiratory patterns, ensuring real-time health parameter updates.
The system will also monitor motion and activity levels through accelerometer and gyroscope sensors, adding depth to the analysis.
4. *Emergency Anomaly Detection:* A built-in emergency response mechanism will automatically contact preconfigured emergency services or caregivers in case of abrupt heart rate anomalies, ensuring timely medical intervention.
5. *User-Friendly Interface:* The system will feature an intuitive dashboard to visualize sleep metrics. It will also provide users and caregivers with detailed monthly reports to track progress and identify trends.
6. *Portability and Ease of Use:* The system will be lightweight, ergonomic, and powered by rechargeable lithium-ion batteries for uninterrupted usage. It will be designed as a wearable device.
---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG | Alignment |
|:---|:----------|
| Goal 03 - Good Health and Well-being | The project helps users identify potential sleep disorders (e.g., insomnia, sleep apnea), detect irregularities in heart rate or breathing, and promote healthy sleep hygiene |
| Goal 09 - Industry, Innovation, and Infrastructure |  By utilizing IoT technology to analyze sleep patterns, the system demonstrates innovation in the intersection of healthcare and technology |


### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#11 |  Elderly Monitoring System with Fall Detection and Emergency Alert Mechanism | 
---

### References  
- K. Thinakaran, V. V. Baskar, M. A. Shariff, M. Chervith, G. Raghavendra, and S. Velmurugan, "IoT-Enabled Sleep Monitoring Wearables: Advancements in Tracking and Analysis"  
- Ali, S., & Parveen, S. (2023), “IoT-Based Smart Healthcare Monitoring System: A Prototype Approach”
- Karthika, K., Mishra, N., Dhanalakshmi, S., Sasikala, S., Murthy, S. M., \& Murugan, S. (2023) "Raspberry Pi-enabled wearable sensors for personal health tracking and analysis"
