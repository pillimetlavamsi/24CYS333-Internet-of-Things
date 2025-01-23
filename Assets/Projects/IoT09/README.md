# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#09  - Smart Bike Sharing System with IoT Integration for Tracking and Maintenance

![](https://img.shields.io/badge/Member-B_M_Sai_Sathvik-gold)  ![](https://img.shields.io/badge/Member-Gunateet_Dev-gold)  ![](https://img.shields.io/badge/Member-Vishal_S-gold) <br/> 
![](https://img.shields.io/badge/SDG-7-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) ![](https://img.shields.io/badge/SDG-11-darkgreen) ![](https://img.shields.io/badge/SDG-13-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-23rd_Jan_2025-brown)
---

### Problem Statement
Urban transportation faces significant challenges, including congestion, environmental concerns, and inefficient bike sharing systems. Traditional
bike-sharing setups often lack smart features like seamless payment, real-time tracking, and maintenance alerts, limiting their appeal and usability. In addition, users often face problems such as unclear vehicle availability, lack of range estimation, and difficulty ensuring bike security.<br> 
This project aims to design and implement a prototype Smart Bike Sharing System that integrates Internet of Things (IoT) technology to address these challenges. The system focuses on two key functionalities: payment-based unlocking and dynamic range display.<br> 
A GPS module will enable real-time tracking, allowing users and administrators to monitor the bike’s location for safety and efficient management.

---

### Hardware Requirements

| Component                  | Functionality                                                                                    |
|----------------------------|--------------------------------------------------------------------------------------------------|  
| ESP 32 Micro controller    | Core control unit to handle logic.                                                               |
| Servo Motor                | Simulates the lock/unlock mechanism for the bike-sharing system.                                 |
| GPS Module (NEO-6M)        | Tracks the bike's location in real time and enables location based features.                     |
| OLED/LED Display Panel     | Displays the range of the vehicle and system status for additional user feedback.                |
| Buzzer                     | Provides audio feedback for alerts like successful payment, unlocking, or unauthorized access.   |
| Power Supply (Battery)     | Ensures portability and uninterrupted power supply to the system.                                |
| LED indicators             | Visual indicators for system statuses such as power, lock status, payment success, or errors.    |
| Breadboard and Jump Wires  | Allow easy connections for assembling and testing components.                                    |

---

### Literature Survey  

#### Existing Solutions  
Current systems addressing secure bike-sharing, tracking, and theft prevention include:  
- **IoT-Based Bike Sharing Systems:** In this type of system, IoT devices are used for unlocking bikes and tracking usage. However, such systems often do not include sophisticated theft detection mechanisms like accelerometer-based monitoring and real-time geofencing.  
- **GPS-Enabled Fleet Management:** The use of GPS tracking is common in shared mobility solutions to track the location of vehicles. Though effective for tracking, the existing implementations are not fully integrated with theft detection or remote locking features, thus making them vulnerable.
 
- **Payment-Integrated Mobility Models:** Pay-and-Go bike rentals, for example, make the payment process very streamlined but do not have mechanisms to integrate payment confirmation with secure unlocking, thus allowing unauthorized use or bypass.  

#### Research Gaps  
- **Integrated Theft Detection and Prevention:** Although the present systems are not perfect, theft prevention models that use a combination of accelerometers and geofencing to predict unauthorized movement are not available at present.
- **Real-Time Tracking and Alerts:** Existing solutions inadequately use IoT and GPS for immediate alerts, live status updates and remote control, hindering effective fleet and security management.

---

### Key Features
- Real-Time Bike Tracking 
- Decentralized Accessibility 
- Maintenance Automation 
- Enhanced User Experience (reservations, smart locks, payment integration, real-time availability updates) 
- Sustainability 
- Cost Efficiency 
- Scalability
---
### Mapping the Project to Relevant Sustainable Development Goals (SDGs)
| SDG                                      | Alignment                                                                                                                                                 |
|:-----------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------|
| Goal 7 - Affordable and Clean Energy     | Supports energy-efficient transportation systems, especially when integrated with electric bikes powered by renewable energy sources. |
| Goal 9 - Industry, Innovation, and Infrastructure | Incorporates IoT technology to create smarter infrastructure for urban mobility, enhancing efficiency, and innovation in public transportation systems.|
| Goal 11 - Sustainable Cities and Communities     | Promotes sustainable urban transportation, reduces traffic congestion, and lowers carbon emissions by encouraging bike-sharing as an eco-friendly travel option.  | 
| Goal 13 - Climate Action     | Contributes to reducing greenhouse gas emissions by replacing fossil fuel-based transportation with bicycles, supporting efforts to combat climate change.|


### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#08 | Theft Detection System | 

---
### References

- Rachman, F. A., Putrada, A. G., & Abdurohman, M. (2018, May). **Distributed campus bike sharing system based-on internet of things (IoT)**. _In 2018 6th International Conference on Information and Communication Technology (ICoICT)_ (pp. 333-336). IEEE.
  
- Razzaque, M. A., & Clarke, S. (2015, October). **Smart management of next generation bike sharing systems using Internet of Things**. _In 2015 IEEE First International Smart Cities Conference (ISC2)_ (pp. 1-8). IEEE.

