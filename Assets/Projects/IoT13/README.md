# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#13 -  Supply chain management of Milk using Blockchain and IoT

![](https://img.shields.io/badge/Member-Deepak_Kumar_S-gold)  ![](https://img.shields.io/badge/Member-Joshua_Anto_A-gold)  ![](https://img.shields.io/badge/Member-Midhru_Jayan_K-gold) <br/> 
![](https://img.shields.io/badge/SDG-2-darkgreen) ![](https://img.shields.io/badge/SDG-12-darkgreen) ![](https://img.shields.io/badge/SDG-17-darkgreen) <br/>
<!--![](https://img.shields.io/badge/Reviewed-brown)-->

---
### Problem Statement
The supply chain management of milk faces significant challenges in ensuring transparency, traceability, efficiency, and quality control. Traditional systems are often fragmented, rely heavily on manual processes, and lack real-time monitoring and verification mechanisms. These shortcomings result in inefficiencies, higher costs, and compromised milk quality, ultimately affecting consumer trust and satisfaction.

---
### Hardware Requirements

| Components      | Purpose | 
|:-----------------|:-------| 
| ESP32 Board             | Acts as the central microcontroller to integrate and process data from various IoT sensors.  |
| PIR Motion sensor(HC-SR501)  |Detects unauthorized access to milk storage or transportation areas.|
| DHT22 (Temperature/Humidity)| Monitors the storage and transportation conditions to ensure milk quality. |
| GPS Module (NEO-6M)    | Tracks the real-time location of milk during transportation for traceability.  |
| GSM Module (SIM7600)    | Enables wireless communication for transmitting IoT data to the blockchain network.   |
| Breadboard and Jump Wires    | Facilitates connections between hardware components for prototyping and testing.   |

### Software Requirements
- TBD

---
### Literature Survey  

#### Existing Solutions
- **Blockchain-Based Systems:** This enhances traceability and data integrity in food and agriculture supply chains, with examples like IBM Food Trust and VeChain ensuring tamper-proof records. However, these systems focus on transaction verification and lack real-time environmental monitoring essential for perishable goods like milk.
- **IoT-Enhanced Models:** IoT devices, such as temperature and humidity sensors, are used for real-time monitoring in supply chains. While effective for cold chain logistics, these models often lack scalability and integration with decentralized Blockchain platforms for comprehensive traceability.
- **Combined Blockchain and IoT Systems:** Combining Blockchain and IoT offers end-to-end visibility with real-time data logging and immutable records. However, such systems are usually sector-specific, like pharmaceuticals, and not adapted for the unique needs of dairy supply chains, including spoilage prevention and fraud detection.
 
#### Research Gaps  
1. **Milk-Specific Supply Chain Needs**: While Blockchain and IoT systems have been implemented in agriculture and general food supply chains, solutions specifically tailored to address milk's perishability, fraud, and adulteration challenges are limited.
2. **Integrated Quality Monitoring**: Existing systems inadequately integrate IoT devices like temperature and humidity sensors with Blockchain to provide a unified platform for real-time monitoring and transparent record-keeping across all supply chain stages
---

### Proposed Solution: 

- Integrating Blockchain and IoT technologies offers a potential solution to these challenges. Blockchain can provide an immutable, transparent, and decentralized record of transactions, ensuring trust and traceability. IoT devices, like temperature and humidity sensors, can provide real-time data on milk storage and transportation conditions, enabling proactive quality management. By leveraging these technologies, stakeholders can build a more efficient, trustworthy, and consumer-focused milk supply chain
---

### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG | Alignment |
|:---|:----------|
| Goal 2 - Zero Hunger| Reduce milk waste by monitoring storage conditions and ensuring optimal transportation logistics. |
| Goal 12 - Responsible Consumption and Production | Ensure a safe and sustainable milk supply by reducing wastage and spoilage through real-time monitoring.   |
| Goal 17 - Partnerships for the Goals | Collaboration among farmers, producers, distributors, and consumers through a transparent Blockchain-enabled ecosystem   |

### Collaboration 
- TBD
---

### References
- Bhat, S. A., Huang, N., Sofi, I. B., & Sultan, M. (2021). Agriculture-Food Supply chain Management Based on Blockchain and IoT: A Narrative on Enterprise Blockchain Interoperability. Agriculture, 12(1), 40. https://doi.org/10.3390/agriculture12010040.
- Gondal, M. U. A., Khan, M. A., Haseeb, A., Albarakati, H. M., & Shabaz, M. (2023). A secure food supply chain solution: blockchain and IoT-enabled container to enhance the efficiency of shipment for strawberry supply chain. Frontiers in Sustainable Food Systems, 7. https://doi.org/10.3389/fsufs.2023.1294829
