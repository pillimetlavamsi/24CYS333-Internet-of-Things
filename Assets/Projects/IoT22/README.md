# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#22 - IoT-Based System to mitigate traffic congestion for emergency vehicles.

![](https://img.shields.io/badge/Member-Nedurumalli_Ved_Varshith_Reddy-gold) ![](https://img.shields.io/badge/Member-Saride_Someswara_Sai_Sri_Chakri-gold) ![](https://img.shields.io/badge/Member-Rudra_Srilakshmi-gold)</br>
![](https://img.shields.io/badge/SDG-11-darkgreen)</br>
<!--![](https://img.shields.io/badge/Reviewed--brown) -->

---

### Problem Statement:
Heavy traffic congestion is increasingly becoming a problem in urban areas, which is a challenge to emergency response systems. Emergency vehicles like ambulances, fire engines, and police cars are often stuck in traffic, delaying their arrival at critical locations. Such delays can have severe consequences, including loss of lives, increased damage to property, and reduced effectiveness of emergency response efforts.Currently, the existing systems of traffic management do not accommodate the needs for the free flow of emergency vehicles, especially in peak hours. This creates tremendous challenges for the emergency services when they have to navigate through roads that are very congested and,therefore, cannot provide help in time. This calls for an innovative solution to address this issue so that emergency vehicles reach their destinations without such delays.

---

### Hardware Requirements:
| Component | Functionality |
| --------- | ------------- |
| ESP32 Microcontroller | Acts as the central processing unit for handling inputs and outputs |
| Sound sensor(KY-038) | Detects sound levels and converts audio signals to electrical signals |
| 7.4V 2200mAh Li-ion Battery Pack | Supplies portable power to the system |
| Voltage Regulator (LM7805) | Ensures a stable voltage supply to components |
| Breadboard | Allows for easy and temporary circuit prototyping |
| Jumper Wires | Connect various components for signal and power transmission |
| Noise Calibration Tool(BAFX Products Sound Level Meter) | Measures and calibrates sound levels for accurate sensor operation |


---

### Literature Survey

#### Existing Solutions
1. **Smart Traffic Systems:** Existing systems using IoT and GPS improve traffic flow but often require costly infrastructure and overlook sound-based detection.
2. **Sound-Based Emergency Detection:** Studies on siren detection show potential but are limited in scalability and real-time noise calibration.
3. **Traffic Congestion Impact:** Research highlights delays in emergency response due to traffic but focuses more on navigation than congestion management.
4. **IoT for Urban Safety:** IoT systems monitor urban safety but lack emphasis on emergency vehicle prioritization.
5. **Noise Filtering:** Current solutions struggle to distinguish sirens from urban noise effectively in real time.

#### Research Gaps
1. **Cost-Effective Scalability:** Existing solutions are expensive and unsuitable for large-scale deployment.
2. **Noise Calibration:** Difficulty distinguishing emergency sirens from urban noise, especially during peak hours.
3. **Traffic Integration:** Limited integration with traffic systems for real-time emergency response.
4. **City-Wide Monitoring:** Few systems provide effective real-time monitoring across urban areas.
5. **Energy Efficiency:** Lack of focus on optimizing sensor energy consumption for continuous operation.

---

### Proposed Solution

We plan to place sound sensors all over the city for effective monitoring and detection of emergency sirens. The system will use the Sound Sensor (KY-038) connected to an ESP32 Microcontroller to process sound data in real time. If the system continuously detects the sound of an emergency siren for a long period from the same sensor, it will immediately send alerts.
These alerts perform:
- **Traffic Management:**
When an emergency siren is detected, the ESP32 sends a signal to the traffic light controller at the junction.
The system will turn all other traffic lights red, allowing the emergency vehicle to pass freely.
Once the vehicle has passed or the siren stops, the system will restore normal traffic flow automatically.
This system is intended to make the process of traffic management responsive and efficient in terms of emergency vehicle access, reducing delays and enhancing public safety in critical situations.

---


### Sustainable Develpoment Goals (SDGs)
| SDG | Alignment |
|:----|:----------|
| Goal 11 - Sustainable Cities and Communities | It enhances urban safety by enabling faster emergency response through real-time sound detection, saving lives and improving city infrastructure. |



### Collaboration
| Team | Module & Scope |
|:-----|:---------------|
| [IoT#01](https://github.com/Amrita-TIFAC-Cyber-Blockchain/24CYS333-Internet-of-Things/tree/main/Assets/Projects/IoT01) | IoT-Driven Smart Ambulance System for Real-Time Traffic Management and Emergency Response Optimization** |

---

### References
- Bhate, S. V., Kulkarni, P. V., Lagad, S. D., Shinde, M. D., & Patil, S. (2018). **IoT-based intelligent traffic signal system for emergency vehicles**. 2018 *Second International Conference on Inventive Communication and Computational Technologies (ICICCT)*, 788–793. https://doi.org/10.1109/ICICCT.2018.8473210 
