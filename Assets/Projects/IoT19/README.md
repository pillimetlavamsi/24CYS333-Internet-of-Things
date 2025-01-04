# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#19 : Smart Fire Alarm System with Edge Computing for Real-Time Detection and Rapid Response

## Team Members
| Name                   | Roll Number           |
|------------------------|-----------------------|
| Mareddy Sai Tejas       | (CB.EN.U4CYS22038)     |
| Marri Sanju             | (CB.EN.U4CYS22039)     |
| Tangella Sree Chandan   | (CB.EN.U4CYS22076)     |



## Objective:
Develop a smart fire alarm system utilizing edge computing to detect fire hazards in real-time and provide rapid responses. The system will integrate sensor data (e.g., smoke, temperature, and gas) processed locally on edge devices to reduce latency and improve response times, ensuring faster fire detection and enhanced safety.

---

## Scope:
- Design and implement a prototype using *Raspberry Pi, **smoke sensors, **temperature sensors, **gas sensors, and **alarm systems* to simulate a real-world fire detection environment.
- Evaluate the system’s performance in detecting fires and triggering alarms faster compared to traditional systems that rely on cloud-based processing.
- Investigate the potential integration of *machine learning algorithms* for advanced fire prediction and response optimization.

---

## 2. Hardware Resource Mapping

| *Hardware Components*      | *Functionality*                                                     | *Necessity*                                                              |
|------------------------------|-----------------------------------------------------------------------|----------------------------------------------------------------------------|
| *Raspberry Pi 4*            | Processes sensor data locally, triggers alarms when fire is detected. | Provides sufficient computational power for real-time edge processing.     |
| *Smoke Sensors*             | Detects smoke levels to identify potential fires.                    | Essential for early fire detection, critical for system accuracy.          |
| *Temperature Sensors*       | Monitors ambient temperature to identify abnormal increases (heat).   | Complements smoke detection to improve reliability of fire identification. |
| *Gas Sensors*               | Detects gases like carbon monoxide to identify fire or smoke.         | Ensures comprehensive hazard detection, especially for fire-related gases. |
| *Buzzer/LEDs*               | Triggers alarms and visual signals (red/green) to alert users.       | Provides an output mechanism for real-time alerts, ensuring safety.       |
| *ESP32 Microcontroller*     | Enables communication between sensors and alarms, synchronizes devices. | Ensures low-latency communication for fast response actions.               |
| *Battery*                   | Powers all components for uninterrupted operation.                   | Vital for continuous operation in case of power failure.                   |
| *Cameras (Optional)*        | Capture real-time footage for advanced analysis or AI integration.    | Optional for real-time analysis but helpful for future AI-based upgrades. |
| *Jumper Wires*              | Connect components for prototyping.                                   | Essential for assembling the prototype and debugging.                     |
| *Breadboard/PCB*            | Breadboard for prototyping; PCB for final deployment.                 | Breadboards facilitate initial testing, while PCBs ensure stable deployment. |

---

## 3. SDG Goals Addressed

The *Smart Fire Alarm System with Edge Computing* contributes to the following *Sustainable Development Goals (SDGs)*:

1. *SDG 3: Good Health and Well-Being*
   - *Target 3.9*: Reduce the number of deaths and illnesses from hazardous chemicals and air, water, and soil pollution.
   - *Relevance*: The fire alarm system enhances public safety by providing quick responses to fire hazards, potentially reducing the risks of fire-related injuries, fatalities, and exposure to harmful pollutants.

2. *SDG 9: Industry, Innovation, and Infrastructure*
   - *Target 9.4*: Upgrade infrastructure and retrofit industries to make them sustainable.
   - *Relevance*: Implementing edge computing in fire alarm systems represents an innovative approach to improving infrastructure and industrial safety, making environments more resilient to fire hazards.

3. *SDG 11: Sustainable Cities and Communities*
   - *Target 11.5*: Reduce the number of deaths and the number of people affected by disasters, including water-related disasters, with a focus on protecting the poor and vulnerable.
   - *Relevance*: The integration of edge computing in fire safety systems enhances emergency response times, which is critical for reducing the impact of fires in urban areas, especially in vulnerable communities.

4. *SDG 13: Climate Action*
   - *Target 13.1*: Strengthen resilience and adaptive capacity to climate-related hazards and natural disasters in all countries.
   - *Relevance*: Fire risks, especially wildfires, are increasing due to climate change. A real-time fire detection system using edge computing contributes to disaster preparedness and mitigation efforts.

5. *SDG 17: Partnerships for the Goals*
   - *Target 17.6*: Enhance North-South, South-South, and triangular regional and international cooperation on and access to science, technology, and innovation.
   - *Relevance*: This project promotes the use of cutting-edge technologies in fire detection and safety, encouraging international collaboration in smart city and smart safety solutions.

---

## 4. Literature Survey

#### *Methodology:*
The literature survey was conducted using the Publish or Perish tool, reviewing academic papers and studies related to *edge computing, **fire alarm systems, **IoT, and **smart safety systems*.

#### *Search Terms:*
- "Edge computing in fire detection systems"
- "Smart fire alarm systems IoT"
- "Real-time fire detection and response"
- "Sensor integration in fire safety"
- "Machine learning for fire prediction"

#### *Summary of Findings:*


---

## Conclusion:
A *Smart Fire Alarm System with Edge Computing* offers a significant advancement over traditional cloud-based systems by enabling real-time detection and rapid response to fire hazards. By processing sensor data locally on edge devices (e.g., Raspberry Pi), the system reduces latency and increases the speed of fire alerts. This project not only enhances public safety by improving fire detection but also paves the way for future integration of AI and machine learning for predictive fire management. The integration of edge computing in fire safety systems will improve both the reliability and scalability of these systems in smart cities and other environments.
