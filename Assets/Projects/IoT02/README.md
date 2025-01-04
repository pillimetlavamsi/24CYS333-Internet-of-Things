# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#02 - Smart Waste Bin Monitoring and Route Optimization for Garbage Collection.
### Problem Statement
Design a smart waste management system that utilizes sensor-equipped waste bins to monitor real-time waste levels and use the collected data to optimize waste collection routes, considering factors such as collection frequency, distance, waste volume, fuel efficiency, and potential waste stagnation.

### Team Members
| Roll No. |  Name  | 
|:-----|:--------:|
| 02   | Adithya N S | 
| 12   |  Avi Nair  |  
| 66   | S Parvathi |  

### Hardware Requirements

| Hardware |  Name  | 
|:-----|:--------:|
| Ultrasonic sensors   | HC-SR04 | 
| Weight Sensors   |  Load Cells  |  
| Microcontroller   | Arduino MKR WiFi 1010 | 
| Power Supply | LiPo Battery |
| Indicators | LED Indicators (Red, yellow and green) |

### Sustainable Development Goals
#### Goal 11 - Sustainable Cities and Communities
- **Efficient Waste Management and Environmental Sustainability:**  The IoT-based smart waste bin monitoring system ensures timely waste collection, prevents overflowing bins, and enhances urban cleanliness. By optimizing garbage collection routes, it reduces fuel consumption and greenhouse gas emissions, promoting environmentally sustainable practices and minimizing the carbon footprint of waste management operations.
- **Improved Urban Living and Data-Driven Decision Making:** This solution enhances urban aesthetics, fosters public health, and enables cost-effective waste management. The data-driven insights empower authorities to strategically improve waste disposal infrastructure and engage communities in responsible waste management practices, contributing to resilient and sustainable cities.

#### Goal 9 - Industry, Innovation and Infrastructure
- **Driving Technological Innovation in Waste Management:** The project leverages IoT sensors and real-time data analytics to revolutionize traditional waste management practices, showcasing how smart technologies can address urban challenges and foster sustainable industrial practices.
- **Enhancing Infrastructure Efficiency and Resilience:** By optimizing waste collection routes and preventing waste overflow, the system strengthens waste management infrastructure, reduces operational inefficiencies, and minimizes vehicle wear and tear, contributing to more resilient and cost-effective urban systems.

### Literature Survey 
- We have read two papers “IoT-Enabled Smart Waste Management: A Comprehensive Study on Sensor Technologies and Implementation Strategies” and "IoT-Enabled Intelligent Garbage Management System for Smart City: A Fairness Perspective", both are 2024 papers. Both propose solutions for a smart bin management and route optimization.

- Both the papers use the LoRa technology for communication as it is the most cost-effective and energy-efficient communication protocol for long-range data transmission. The other methods like GSM, WiFi and ZigBee were also mentioned, but, LoRa remains the best protocol for the proposed system due to its scalability, energy efficiency, and affordability. So we have decided on using the LoRa technology for communication.

- Both papers emphasize IoT-enabled sensors (e.g., ultrasonic and weight sensors) for real-time monitoring of bin statuses.

- The first paper uses IoTBinCap algorithm for bin capacity optimization, prioritizing route efficiency. The second paper proposes the Fairness-Based Optimum Solution (FBOS) algorithm. We haven’t decided on which algorithm to use yet as both of these have their own merits and demerits.

- The major two challenges encountered by the papers are the issues with scalability and the LoRa’s decrease in packet delivery rate with increase in device numbers.The solution suggested for LoRa’s packet delivery rate decrease is to use LoRa gateways strategically to enhance scalability.Solar panels or LiPo batteries can be adopted for sustainable power supply.	
	
### References
- Sankar, G. R., & Fathima, G. (2024). IOT-Enabled Smart Waste Management: A comprehensive study on sensor technologies and implementation strategies. 2022 International Conference on Inventive Computation Technologies (ICICT). https://doi.org/10.1109/icict60155.2024.10544982
- Rahman, M. A., Tan, S. W., Asyhari, A. T., Kurniawan, I. F., Alenazi, M. J. F., & Uddin, M. (2024). IoT-Enabled Intelligent Garbage Management System for Smart City: A Fairness Perspective. IEEE Access, 12, 82693–82705. https://doi.org/10.1109/access.2024.3412098
