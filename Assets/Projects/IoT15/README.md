# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#15 - **IoT-Based Smart Blood Bank Management System**
-------
## Team Members

| Name                     | Roll Number          |
|--------------------------|----------------------|
| Harshith Gangisetty      | CB.EN.U4CYS22027     | 
| Karri Jeeshitha          | CB.EN.U4CYS22032     | 
| Vajjula Satya Siddardha  | CB.EN.U4CYS22063     | 

---------------

## Problem Statement

Blood banks play a critical role in saving lives, but inefficiencies in managing blood inventory, ensuring proper storage conditions, and timely distribution often lead to wastage or shortages of blood. Traditional blood bank systems lack real-time monitoring of blood stock levels, storage temperature, and immediate alert mechanisms in case of anomalies.Additionally, communication gaps between donors, blood banks, and recipients further complicate the process. To address these challenges, the proposed IoT-Based Smart Blood Bank Management System leverages real-time data collection and monitoring through sensors and connected devices. This IoT-enabled approach promises to enhance the operational efficiency of blood banks, ensuring the availability of safe and high-quality blood for patients in need.

-----------
## Proposed solution

The **IoT-Based Smart Blood Bank Management System** leverages IoT technology to improve blood bank efficiency. The system integrates real-time monitoring of blood storage conditions using temperature sensors (LM35) and stock levels through load cell modules. Alerts are sent via GSM modules (SIM800L) in case of anomalies or low stock. 

Key features include:
- **Real-Time Monitoring:** Tracks storage temperature and blood stock levels.
- **Automated Alerts:** Sends SMS notifications for emergencies or deviations.
- **Centralized Data Access:** Enables remote monitoring via IoT connectivity (ESP8266 Wi-Fi).
- **On-Site Alerts:** Provides visual (LED) and audio (buzzer) warnings.
This system ensures better inventory management,compliance with storege standards,and timely communication with stakeholders,making blood bank operations more reliable and efficient.

----------
## Hardware Required  

| Component                  | Description                     |  
|----------------------------|-------------------------------------------|  
| Arduino Uno R3             | Microcontroller Board                     |  
| ESP8266 Wi-Fi Module       | IoT Connectivity                          |  
| USB Cable                  | Arduino Connectivity                      |  
| 16x2 LCD Display           | Data Display                              |  
| LM35 Temperature Sensor    | Monitors Blood Storage Temperature        |  
| HX711 Amplifier Module     | Weight Measurement Amplifier              |  
| 5kg Load Cell (DYMH-103)   | For Stock Level Monitoring                |
| 12V Power Adapter          | Power Supply                              |  
| Voltage Regulator (7805)   | Stable Voltage Supply                     |  
| GSM Module (SIM800L)       | SMS Notifications                         | 
|RTC Module (DS3231)	        | Timestamping for Logging and Monitoring   |
| RFID Module (RC522)        | Blood Bag Tagging                         |  
| Breadboard                 | Prototyping                               |  
| Jumper Wires               | Connections                               |  
| Resistors and Capacitors   | Circuit Stability                         |  
| Buzzer                     | Audio Alerts                              |  
| LED Indicators             | Visual Alerts                             |  


-----------

## Sustainable Development Goals

**Goal 3 - Good Health and Well-Being**

The project directly contributes to ensuring healthy lives and promoting well-being by improving the efficiency, reliability, and accessibility of blood bank systems. Real-time monitoring of blood inventory, storage temperature, and timely alerts ensure safe blood storage and distribution. This helps save lives,
reduces wastage of blood, and addresses critical healthcare challenges, thus aligning with this goal.


**Goal 9 - Industry, Innovation and Infrastructure**
 
By utilizing IoT and innovative technologies like sensors, GSM modules, and real-time data transmission, the project promotes sustainable industrial practices and resilient infrastructure. The integration of technology fosters innovation in the healthcare sector, improving operational efficiency and ensuring a streamlined blood supply chain. This reflects the essence of building infrastructure that supports inclusive and sustainable industrialization.


---------------------------
## Research Papers  
  


| **Year** | **Reference** |
|----------|---------------|
| 2019     | Siruvoru, V., Kumar, N. V., & Kumar, Y. B. S. (2019). Smart blood bank system using IoT. *International Conference on Intelligent Sustainable Systems (ICISS)*. Springer. [https://doi.org/10.1007/978-981-10-8681-6_69](https://doi.org/10.1007/978-981-10-8681-6_69) |
| 2023     | Joly, M., Kavitha, S., & Pradeep, A. (2023). Smart monitoring, management and control of blood bank management system using IoT. *Cardiometry*. [https://search.proquest.com/openview/6292828036268c541f82799b56ceb2b2/1?pq-origsite=gscholar&cbl=2045095](https://search.proquest.com/openview/6292828036268c541f82799b56ceb2b2/1?pq-origsite=gscholar&cbl=2045095) |
| 2024     | Babu, J. C., Khan, M., Nandini, K., & others. (2024). Internet of Things (IoT)-based smart blood bank services: A review. *15th International Conference on IoT and Big Data*, 101-110. IEEE. [https://ieeexplore.ieee.org/abstract/document/10724178/](https://ieeexplore.ieee.org/abstract/document/10724178/) |

----------------------------
