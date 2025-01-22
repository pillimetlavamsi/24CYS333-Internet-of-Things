# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#06 - Developing an IoT-Based Smart Grid Architecture for Efficient Energy Distribution

![](https://img.shields.io/badge/Member-Arul_Sujith_S-gold)  ![](https://img.shields.io/badge/Member-Hemadhri_P_C-gold)  ![](https://img.shields.io/badge/Member-Akshit_Singh-gold) <br/> 
![](https://img.shields.io/badge/SDG-7-darkgreen) ![](https://img.shields.io/badge/SDG-11-darkgreen) <br/>

---
### Problem statement

Traditional power grids lack real-time optimization, leading to over-reliance on fossil fuels even when renewable energy is available.Current grids struggle to integrate renewable sources efficiently, resulting in underutilization and increased carbon emissions.There is no autonomous system to prioritize renewable energy over fossil fuels based on real-time demand and supply.Grids lack real-time monitoring tools, delaying fault detection and reducing overall efficiency.Reactive maintenance and operational inefficiencies increase costs and lead to longer downtimes during outages.

---
### Hardware Requirements

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
| ESP32 Board              | Acts as a microcontroller for IoT operations, enabling connectivity and real-time data collection. |
| Power Supply (Battery)     | Ensures portability and uninterrupted power supply to the system.                                |
| INA219 Module            | Measures voltage, current, and power accurately, suitable for small loads like LEDs.             |
| LED indicators             | Used as energy-consuming devices to demonstrate real-time energy monitoring |
| Breadboard and Jump Wires  | Allow easy connections for assembling and testing components.                                    |


---
### Literature Survey  

#### Existing Solutions  
- **Self-Healing and High-Reliability Distribution Systems:** The use of advanced metering, automation, and communication networks to enable self-healing capabilities and high reliability. However, these systems face challenges in ensuring real-time adaptability and seamless integration of distributed energy resources (DER).
- **Renewable Integration and Grid Automation Frameworks:** Integrating renewable energy and enhancing grid automation. While these frameworks improve load balancing and peak demand management, they often lack comprehensive solutions for addressing cybersecurity threats and ensuring grid stability in real-time.  

#### Research Gaps  
1. **Interoperability and Cybersecurity:** Despite advancements in grid automation and communication technologies, robust frameworks for ensuring interoperability and cybersecurity across diverse smart grid components remain underdeveloped. 
2. **Real-Time Adaptability:** Current smart grid designs often lack mechanisms for real-time adaptability to sudden changes in demand, renewable energy supply fluctuations, and grid disruptions, limiting their efficiency and resilience.
---

### Proposed Solution
- **Smart Energy Management:** Prioritize renewable and nuclear energy, using fossil fuels only when necessary.

- **Autonomous Optimization:** Optimize energy production and consumption dynamically using real-time and forecasted demand.

- **IoT Dashboard:** Centralized platform for real-time monitoring and control of energy supply, demand, and system health.

---
### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG                                      | Alignment                                                                                                                                                 |
|:-----------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------|
| Goal 7 - Affordable and Clean Energy | Enhances energy efficiency in educational institutions by monitoring and optimizing power consumption in classrooms, reducing energy waste, and supporting sustainable energy use.     |
| Goal 11 - Sustainable Cities and Communities     | Promotes energy-efficient infrastructure in universities, enabling real-time tracking and control of electricity usage to minimize waste and support cleaner, more sustainable urban environments.      |

---
### References  
- Loschi, H. J., Leon, J., Iano, Y., Filho, E. R., Conte, F. D., Lustosa, T. C., & Freitas, P. O. (2015). **Energy efficiency in Smart Grid: A prospective study on Energy Management Systems.** _Smart Grid and Renewable Energy_, 6(8), 250–259.


- Rehman, A. U., Javaid, N., Alhussein, M., Shafiq, M., Ahmed, S. H., & Khan, B. S. (2021). **An efficient energy management in Smart Grid considering demand response program and renewable energy sources.** _IEEE Access_, 9, 148821–148844.







