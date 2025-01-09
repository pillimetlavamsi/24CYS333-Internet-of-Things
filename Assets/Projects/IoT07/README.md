# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#07 -  Real-Time IoT-Driven Public Transport Scheduling and Tracking System

![](https://img.shields.io/badge/Member-Asrita_NL-gold)  ![](https://img.shields.io/badge/Member-Chitla_Vyshali-gold)  ![](https://img.shields.io/badge/Member-Chinni_Nagasree_Hansica-gold) <br/> 
![](https://img.shields.io/badge/SDG-11-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-08th_Jan_2025-brown) 

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
|Ultrasonic Sensor     | Measures distances by emitting ultrasonic waves and detecting reflected signals. |
|OLED/LED Display Panel            | Displays data, messages, or system status to the user in a visual format. |
|Power Supply (Battery)               | Provides electrical power to the entire hardware system. |
|Temperature and Humidity Sensor    | Measures ambient temperature and humidity levels. |
|Accelerometer            | Detects and measures motion, orientation, and acceleration of the device. |
|Breadboard               | A tool for prototyping and testing circuits without soldering. |


---
### Literature Survey  

#### Existing Solutions  
 
**WhereIsMyTransport:**Aggregates real-time public transport data in emerging markets, focusing on mapping informal transit networks, but lacks advanced predictive capabilities and commuter-focused features.-
**Google Maps Transit Integration:**Provides real-time public transport schedules and vehicle tracking using GPS data from transit agencies, but focuses more on static schedule integration and lacks dynamic, decentralized IoT scalability.  
**Citymapper:**Offers real-time tracking, route optimization, and live updates for public transport, but heavily relies on centralized data feeds, making it less adaptable to decentralized or volunteer-driven models.

#### Research Gaps  
**Predictive Analytics for Dynamic Scheduling:** Most systems focus on static schedules with basic GPS tracking, lacking advanced AI-driven predictive algorithms to dynamically adjust schedules based on real-time conditions like traffic or delays.
**Passenger Engagement and Feedback:** Few solutions involve passengers actively, either through crowdsourcing data or incentivizing participation to enhance system accuracy and reliability. 
3. **Data Privacy and Security:**While IoT systems collect extensive data, research is lacking on ensuring robust data encryption and protecting passenger privacy, especially in public transportation systems.

---

### Proposed Solution 

#### Relevance of Proposed Work  
**Improves Public Transit Efficiency:** The system reduces delays, optimizes routes, and enhances reliability, encouraging more people to use public transportation.
**Encourages Community Involvement:** Volunteer-driven contributions and incentivized reporting foster community participation and accountability in maintaining the system.
**Enhancing Transparency and Trust:** Blockchain ensures immutable logs of volunteer efforts and NGO resource use, fostering trust among participants.  
4. **Innovates Beyond Existing Solutions:**Combines IoT and blockchain to address gaps in decentralization, predictive analytics, and integration of informal transport modes.---

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
A. A. Habadi and Y. S. Abu Abdullah, "Keen Safety School Buses System Using RFID and Carbon Dioxide Detection," 2018 first International Conference on Computer Applications and Information Security (ICCAIS), Riyadh, 2018, pp. 1-7. 

- Leeza Singla, Dr Parteek Bhatia "GPS Based Bus Tracking System" IEEE International Conference on Computer, Communication and Control (IC4-2015).
