# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#15 - Smart Blood Bank Management System  
![](https://img.shields.io/badge/Member-vsatayasiddardha-gold) ![](https://img.shields.io/badge/Member-jeesh27-gold) ![](https://img.shields.io/badge/Member-Harshith1201-gold) <br/> 
![](https://img.shields.io/badge/SDG-3-darkgreen) ![](https://img.shields.io/badge/SDG-9-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-23rd_Jan_2025-brown)

---------------

### Problem Statement

Blood banks face inefficiencies in inventory management, proper storage, and timely distribution, leading to wastage and shortages. The lack of real-time monitoring for blood stock, storage conditions, and immediate communication between donors, blood banks, and recipients further exacerbates the problem. An IoT-enabled system can address these challenges by enabling real-time data collection, inventory tracking, and seamless communication.  

-----------

### Hardware Required  

| Components               | Purpose                                                                                         |  
|:-------------------------|:------------------------------------------------------------------------------------------------|  
| Arduino Uno R3           | Acts as the microcontroller board for managing peripheral devices.                              |  
| ESP8266 Wi-Fi Module     | Provides IoT connectivity for real-time data transfer.                                          |  
| USB Cable                | Used to connect the Arduino to a computer for programming and power.                            |  
| 16x2 LCD Display         | Displays real-time data such as blood stock levels and temperature.                             |  
| LM35 Temperature Sensor  | Monitors the storage temperature of blood to ensure optimal conditions.                         |  
| HX711 Amplifier Module   | Amplifies signals from the load cell for accurate weight measurement.                           |  
| 5kg Load Cell (DYMH-103) | Measures the stock levels of stored blood in real time.                                         |  
| Barcode Scanner          | Reads barcodes on blood packets for integrity verification and inventory updates.               |  
| GSM Module (SIM800L)     | Sends SMS notifications to donors and recipients.                                               |  
| RTC Module (DS3231)      | Provides timestamping for logging and monitoring blood storage events.                          |  
| Voltage Regulator (7805) | Ensures stable voltage supply to the components.                                                |  
| 12V Power Adapter        | Provides power to the entire system.                                                            |  
| Breadboard               | Used for prototyping and connecting components during development.                              |  
| Jumper Wires             | Facilitates connections between different components.                                           |  
| Resistors and Capacitors | Ensures circuit stability and smooth operation of the system.                                   |  
| Buzzer                   | Provides audio alerts in case of anomalies or critical notifications.                           |  
| LED Indicators           | Offers visual alerts for system status and critical events.                                     |  

-----------

### Literature Survey

#### *Existing Solutions*  
1. *Traditional Inventory Systems:*  
   - Manual and database-driven inventory management in blood banks.  
   - *Limitations:* Lack of real-time tracking and automated updates.  

2. *IoT-Enhanced Solutions:*  
   - Temperature monitoring systems for storage.  
   - *Limitations:* Does not integrate with inventory or provide end-to-end communication.  

3. *Mobile Apps for Donor Coordination:*  
   - Platforms like erakthgosh are available.  
   - *Limitations:* These solutions have limited adoption and are used in only a few regions.  

#### *Research Gaps*  
1. *Real-Time Integration:* Lack of systems integrating IoT for dynamic inventory management and anomaly detection.  
2. *Donor-Recipient Communication:* Minimal focus on automated notifications to bridge gaps between donors and recipients.  
3. *Emergency Response Management:* Absence of mechanisms to reserve blood dynamically during emergencies.  

------------------------------

### Proposed Solution  

#### *Relevance of Proposed Work*  

1. *Smart Storage and Monitoring:*  
   - IoT sensors track temperature and stock quantity in real-time, ensuring blood safety.  
   - Interfaces tailored for hospitals, blood banks, and the public simplify operations and decision-making.  

2. *Enhanced Transparency and Trust:*  
   - Barcode systems ensure accurate inventory logs and verify blood packet integrity.  

3. *Improved Communication:*  
   - Automated notifications to donors during shortages and to recipients for request updates foster timely action.  

4. *Recognition-Based Rewards:*  
   - A donor reward system incentivizes regular donations through recognition and token-based benefits.  

5. *Emergency Reserve Mechanism:*  
   - Real-time inventory allows dynamic blood reservation for nearby ambulances during emergencies.

#### *Use cases*

 1. *Fraud Prevention & Regulatory Compliance:*
    - The barcode system prevents black-market blood sales by ensuring that only authorized hospitals and patients receive blood.
    - The government health database (e.g., National Blood Transfusion Council NBTC) receives automated reports, improving transparency and compliance with 
      health regulations.
      
 2. *Accident and Emergency Response:*
    - A road accident victim in a Tier-2 city needs AB-negative blood. The hospital checks stock via IoT; if unavailable, donors are alerted. A donor responds,
      blood is tested using the doctor’s utility, and sent to the hospital in time, ensuring faster access to rare blood groups.
      
 3. *Blood Donation & Medical Camps:*
    - IoT-enabled QR codes register donor and volunteer participation, while blockchain ensures tamper-proof records. NFT rewards for frequent contributors 
      incentivize sustained engagement in medical aid initiatives.
      
-------------------

### Mapping the Project to Relevant Sustainable Development Goals (SDGs)  


| SDG                                               | Alignment                                                                                          |  
|:--------------------------------------------------|:---------------------------------------------------------------------------------------------------|  
| Goal 3 - Good Health and Well-Being               | Ensures timely availability of safe, high-quality blood, enhancing healthcare outcomes.            |  
| Goal 9 - Industry, Innovation, and Infrastructure | Promotes innovation with IoT and fosters efficient, scalable blood bank operations.                |  

-----------------------

### Collaboration  

| Team   | Module & Scope                                                                 |  
|:------:|:-------------------------------------------------------------------------------|  
| IoT#04 | Empowering Volunteerism with Blockchain and IoT: NFT Rewards for NGO Campaigns |  

---------------

### Architecture Diagram

![arch_dia](https://github.com/user-attachments/assets/f3dcd79a-ce01-43e9-a01e-a555413678fb)



----------------

### Deliverable

1. **Hospital & User Applications:**  
   - **User Mobile App:** Enables donors and recipients to track blood availability, schedule donations, and receive notifications.  
   - **Hospital Web Application:** Allows hospitals and blood banks to manage inventory, monitor storage conditions, and receive alerts.  

2. **Admin Dashboard:**  
   - Centralized platform for system administrators to oversee data flow, manage access controls, and generate reports.  

3. **Real-Time Log Monitoring & Security (RFT - Request for Tracking):**  
   - **Log Monitoring System:** Tracks data transactions and system activities to ensure security and compliance.  
   - **Security Layer:** Implements access control mechanisms and anomaly detection to prevent unauthorized access.  

----------------

### References  

- (n.d.). Internet of Things (IoT)-Based Smart Blood Bank Services: A Review | IEEE Conference Publication | IEEE Xplore. Retrieved from https://ieeexplore.ieee.org/abstract/document/10724178
- Siruvoru, V., Kumar, N. V., & Santhosh Kumar, Y. B. (2018, September 18). Smart Blood Bank System Using IOT. Lecture Notes on Data Engineering and Communications Technologies. Springer Singapore. http://doi.org/10.1007/978-981-10-8681-6_69

