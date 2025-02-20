# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#04 -  Empowering Volunteerism with Blockchain and IoT: NFT Rewards for NGO Campaigns

![](https://img.shields.io/badge/Member-Aishwarya_S-gold)  ![](https://img.shields.io/badge/Member-Dharshika_S-gold)  ![](https://img.shields.io/badge/Member-Shree_Harini_T-gold) <br/> 
![](https://img.shields.io/badge/SDG-9-darkgreen) ![](https://img.shields.io/badge/SDG-17-darkgreen) <br/>
![](https://img.shields.io/badge/Reviewed-08th_Jan_2025-brown) 

---
### Problem Statement
Volunteer-driven NGO campaigns face challenges in transparency, real-time participation tracking, and accurate data collection, especially in remote areas. The absence of IoT integration and reliance on manual methods lead to inefficiencies and scalability issues. IoT can enable real-time data collection, secure participation logging  to address these issues effectively.

---
### Hardware Requirements

| Components               | Purpose                                                                                          |
|:-------------------------|:-------------------------------------------------------------------------------------------------|
| Raspberry Pi 4 Model B   | Serves as the central processing unit for managing IoT devices, processing data, and blockchain integration. |
| ESP32 Board              | Acts as a microcontroller for IoT operations, enabling connectivity and real-time data collection. |
| GSM Module (SIM800L)     | Facilitates communication and data transfer in areas with limited Wi-Fi access. |
| DHT11/DHT22              | Monitors temperature and humidity, providing real-time environmental data. |
| GPS Module (NEO-6M)      | Tracks the geographical location for geo-tagging data and monitoring field operations. |
| NFC Stickers             | Used for volunteer identification and logging participation securely. |
| RFID Tags                | Provides authentication and tracking for volunteers and equipment. |

---
### Literature Survey  

#### Existing Solutions  
Current systems addressing transparency, traceability, and incentivization in volunteer and supply-chain management include:  
- **Blockchain-Based Systems:** Implemented for traceability and data integrity in healthcare supply chains. Examples include MediLedger and Hyperledger Fabric, but these systems are predominantly transaction-centric and lack volunteer-driven campaign models.  
- **IoT-Enhanced Models:** Utilized for environmental tracking in supply chains, yet limited in decentralized real-time updates and scaling to low-resource volunteer networks.  
- **NFT-Enabled Traceability:** NFTs are employed for uniquely identifying assets, as seen in pharmaceutical supply chains, but their potential for volunteer recognition and rewards remains unexplored.  

#### Research Gaps  
1. **Community-Centric Rewards:** Limited focus on recognition-based rewards like NFTs for incentivizing volunteerism.  
2. **Unified Ecosystem:** Absence of an integrated platform connecting volunteers, NGOs, and SHGs to streamline efforts and amplify grassroots impacts.  
3. **Real-Time Data Logging:** Existing models inadequately incorporate IoT for transparent and immediate activity tracking, critical for decision-making in remote areas.  
---

### Proposed Solution 

#### Relevance of Proposed Work  
1. **Encouraging Volunteer Engagement:** By integrating NFT rewards, the project provides recognition that extends beyond monetary incentives, motivating sustained volunteer participation.  
2. **Empowering Grassroots Communities:** The redemption of blockchain-secured tokens for SHG products supports local economies and builds a direct connection between stakeholders.  
3. **Enhancing Transparency and Trust:** Blockchain ensures immutable logs of volunteer efforts and NGO resource use, fostering trust among participants.  
4. **Real-Time Activity Monitoring:** IoT integration enables real-time tracking of volunteer activities, increasing efficiency in campaign management.
---
### Architecture diagram
<img alt="Original" src="https://github.com/Amrita-TIFAC-Cyber-Blockchain/24CYS333-Internet-of-Things/blob/main/Assets/Projects/IoT04/Docs/architectureDiagram.jpeg">

---

### Use Cases
1. **Disaster Relief and Recovery Campaigns**
 IoT devices track volunteer activities in real-time during emergencies, while
 blockchain ensures transparent resource allocation. NFT rewards motivate
 volunteers, who can redeem tokens for SHG products, boosting engagement and
 trust.
2.  **Environmental Conservation and Clean-Up Drives**
 IoT sensors monitor progress in clean-up or plantation drives, and blockchain logs
 volunteer contributions immutably. NFTs reward participants, encouraging
 eco-friendly actions and supporting local economies.
3. **Blood Donation & Medical Camps**
 IoT-enabled QR codes register donor and volunteer participation, while blockchain
 ensures tamper-proof records. NFT rewards for frequent contributors incentivize
 sustained engagement in medical aid initiatives.

---
### Deliverables
- **Web Application (Dashboard & UI):** A platform for NGOs to track campaigns, verify participation, and issue NFT rewards.
- **IoT-Enabled Participation Logging:** RFID/NFC or QR-based check-ins with geo-location tracking for real-time event verification.
- **Blockchain-Powered NFT Rewards:** Smart contracts to issue NFTs based on verified participation.
---
### Mapping the Project to Relevant Sustainable Development Goals (SDGs) 
| SDG                                      | Alignment                                                                                                                                                 |
|:-----------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------|
| Goal 9 - Industry, Innovation, and Infrastructure | Enhances transparency with blockchain, improves campaign management via IoT, and provides modern, efficient solutions for NGOs.                           |
| Goal 17 - Partnerships for the Goals     | Strengthens NGO-volunteer bonds with NFT rewards, optimizes resources using IoT, and provides collaboration with tech experts for impactful solutions.      |


### Collaboration 
| Team | Module & Scope |
|:----:|:---------------|
| IoT#15 | Blood Donation Campaign | 
---

### References  
- Thakur, K. S., Ahuja, R., & Singh, R. (2024). **IoT-GChain: Internet of Things-Assisted Secure and Tractable Grain Supply Chain Framework Leveraging Blockchain.** _Electronics_, 13(18), 3740. 
  
- Turki, M., Cheikhrouhou, S., Dammak, B., Baklouti, M., Mars, R., & Dhahbi, A. (2023). **NFT-IoT pharma chain: IoT drug traceability system based on blockchain and non fungible tokens (NFTs)**. _Journal of King Saud University-Computer and Information Sciences_, 35(2), 527-543.

- Aranda, D. A., Fernández, L. M. M., & Stantchev, V. (2019, July).**Integration of Internet of Things (IoT) and Blockchain to increase humanitarian aid supply chains performance**.__ In 2019 5th international conference on transportation information and safety (ICTIS)__ (pp. 140-145). IEEE.

