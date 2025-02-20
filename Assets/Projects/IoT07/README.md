# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#07 -  Real-Time IoT-Driven Public Transport Scheduling and Tracking System

![](https://img.shields.io/badge/Member-Asrita_NL-gold)  ![](https://img.shields.io/badge/Member-Chitla_Vyshali-gold)  ![](https://img.shields.io/badge/Member-Chinni_Nagasree_Hansica-gold) <br/> 
![](https://img.shields.io/badge/SDG-11-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-23rd_Jan_2025-brown)
---
### Problem Statement
The project proposes a Real-Time IoT-Driven Public Transport Scheduling and Tracking System to address challenges like traffic congestion, route changes, and delays. Utilizing IoT technology, GPS sensors, and wireless communication, vehicles are monitored in real-time, providing data on location, speed, and routes to a central system. Passengers can access real-time updates on arrival times, delays, and occupancy through mobile apps or digital boards at bus stops, enabling efficient passenger flow management and reduced waiting times.

---
### Hardware Requirements

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
|Neo 6M (GPS Module)  | Provides real-time geographic location and time information. |
|ESP32 Microcontroller           | Serves as the main processing unit for controlling all connected hardware and managing communication. |
|GSM/GPRS Module (SIM 800)    | Enables cellular communication for sending and receiving data via SMS or the internet. |
|RFID Reader and Tags             | Facilitates identification and authentication using radio frequency-based technology. |
|Ultrasonic Sensor - HC-SR04    | Measures distances by emitting ultrasonic waves and detecting reflected signals. |
|OLED/LED Display Panel            | Displays data, messages, or system status to the user in a visual format. |
|Power Supply (Battery)               | Provides electrical power to the entire hardware system. |
|Temperature and Humidity Sensor - DS18B20    | Measures ambient temperature and humidity levels. |
|Accelerometer - MPU-6050           | Detects and measures motion, orientation, and acceleration of the device. |
|Breadboard               | A tool for prototyping and testing circuits without soldering. |


---
### Literature Survey  
 -**Real-Time vehicle Tracking (Lushi et al., 2022):** Utilizes GPS modules to continuously track the real-time location of vehicles and transmit data to the cloud using GPS module (Neo-6M), Arduino Uno, Wi-Fi module (ESP8266). Commuters can access this data via a mobile application to plan their trips efficiently.
 -**Route Optimization and Scheduling (Lushi et al., 2022):** Uses GPS and traffic data to optimize vehicle schedules dynamically. The system analyzes congestion patterns and suggests alternative routes to minimize delays.
 -**Smart Ticketing and Contactless Payment (Lushi et al., 2022):** Introduces RFID-based ticketing solutions to automate fare collection and reduce fraud. Data is transmitted to a cloud-based system for efficient revenue tracking
 -**Passenger Distance and Arrival Time Calculation (Salih Younis, 2021):** Uses the Haversine formula to calculate the distance between the passenger and the nearest vehicle. The estimated arrival time is computed based on distance and average speed, reducing waiting times.
 -**Load Monitoring Using IoT Sensors (Lushi et al., 2022):** Implements infrared(IR) sensors at vehicle entry and exit points to count passengers in real time, helping optimize fleet utilization and prevent overcrowding
 
---
### Architecture diagram
<img alt="Original" src="https://github.com/Amrita-TIFAC-Cyber-Blockchain/24CYS333-Internet-of-Things/blob/main/Assets/Projects/IoT07/Architecture_%20diagram.jpeg">

---
### Proposed Solution 

#### Relevance of Proposed Work  
- **Improves Public Transit Efficiency:** The system reduces delays, optimizes routes, and enhances reliability, encouraging more people to use public transportation.
- **Encourages Community Involvement:** Volunteer-driven contributions and incentivized reporting foster community participation and accountability in maintaining the system

---
### Usecases

-**Live Passenger Load Monitoring (Using RFID) :** RFID cards detect when passengers enter or exit the vehicle.The system calculates
 the real-time occupancy and updates the cloud. If the vehicle reaches full capacity, alerts are sent to:- Passengers at the next stop, so they know if the vehicle is crowded.- Transport authorities, to deploy another vehicle if needed.
-**Real-Time vehicle Location Tracking for Passengers:** The Neo 6M GPS module continuously tracks the vehicle location.The ESP32 microcontroller processes this data and sends it to the cloud viaGSM/GPRS (SIM800 module).Passengers can view the real-time location and estimated time of arrival (ETA) through a mobile app, web dashboard, or vehicle stop display.  
-**Predictive Scheduling for Better Fleet Management:** The system analyzes historical data and real-time demand to predict peak hours.Additional buses can be scheduled during high-demand periods (e.g., office rush hours).During low-demand periods, unnecessary vehicles are rerouted or rescheduled to save fuel.
 
---
### ### Deliverables
1. **Passenger Mobile App**: It enhances commuting with real-time vehicle tracking, ETA updates, and passenger load monitoring, helping users plan efficiently. It also provides route suggestions, delay notifications, and an SOS emergency button for a safer and more informed travel experience.
2. **Admin Web Dashboard**: Which enables real-time fleet monitoring, dynamic scheduling, and traffic-based route adjustments, optimizing public transport operations. It also provides passenger load analytics, predictive insights, and emergency alerts, ensuring efficiency, security, and responsive management.
3. **Cloud Infrastructure & Backend**: It ensures real-time GPS data processing, IoT communication, and AI-driven demand forecasting for efficient fleet management. It also provides a secure database and open API integrations for enhanced connectivity with services like Google Maps and Uber. 
  
---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG                                      | Alignment                                                                                                                                                 |
|:-----------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------|
| Goal 11 - Sustainable Cities and Communities | Provide access to safe, affordable, accessible, and sustainable transport systems for all, improving road safety, notably by expanding public transport. |                       
| Goal 9 - Industry, Innovation, and Infrastructure    | Enhances urban mobility by integrating innovative IoT solutions, fostering sustainable infrastructure, and supporting resilient public transport systems.     |


### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#05 | Passenger Safety and Route Monitoring | 
---

### References  
- Salih, T. A., Younis, N. K. (2021). __Designing an intelligent real-time public transportation monitoring system based on iot.__*Open Access Library Journal, 8*(10),1-14.[https://www.scirp.org/journal/paperinformation?paperid=112889](https://www.scirp.org/journal/paperinformation?paperid=112889)
- Lushi, A., Daas, D., Nadeem, M. (2022, December). __IoT-Based Public Transport Management System.__ *In 2022 IEEE Global Conference on Artificial Intelligence and Internet of Things* (GCAIoT) (pp. 69-75). IEEE[https://www.researchgate.net/publication/367439907_IoT-Based_Public_Transport_Management_System](https://www.researchgate.net/publication/367439907_IoT-Based_Public_Transport_Management_System)

