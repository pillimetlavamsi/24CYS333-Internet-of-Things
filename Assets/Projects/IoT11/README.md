# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#11

*Team Members:*

1) B Rushyendra Reddy - CB.EN.U4CYS22015

2) P Roopak - CB.EN.U4CYS22048

3) Y Kishan Sai - CB.EN.U4CYS22064

IoT-Based Comprehensive Elderly Monitoring System with Integrated Fall Detection and Emergency Alert Mechanism
==============================================================================================================

Project Description
-------------------

- The IoT-Based Comprehensive Elderly Monitoring System with Integrated Fall Detection and Emergency Alert Mechanism is designed to enhance the safety and well-being of elderly individuals by providing real-time monitoring, fall detection, and rapid alert mechanisms. The system leverages IoT technologies to continuously monitor the user's movements and identify potential falls or distress signals.

- When a fall is detected, the system triggers an alert sequence that includes activating an alarm, sending emergency notifications to caregivers or emergency services, and logging data for remote access. Additionally, the system incorporates a panic button for manual distress signaling, ensuring the user can seek help when needed.

- This solution is portable, reliable, and designed for ease of use, making it an ideal tool for elderly individuals who require additional safety measures. By ensuring timely alerts and integrating advanced monitoring capabilities, the system reduces response times during emergencies, enhancing the quality of care and providing peace of mind to both users and caregivers.

Problem Statement
-----------------

<p>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;Elderly individuals are at an increased risk of falls and medical emergencies due to age-related health issues, reduced mobility, and chronic conditions. Lack of timely assistance during such incidents often leads to severe health consequences, prolonged recovery, or even fatalities. Traditional monitoring systems are either overly complex or lack the necessary real-time and emergency response features.</p>

Proposed Solution
-----------------

The proposed IoT-Based Comprehensive Elderly Monitoring System addresses these challenges by:

*   Continuously monitoring user movements using an MPU 6050 accelerometer and gyroscope.
    
*   Detecting potential falls through motion analysis.
    
*   Triggering an emergency alert system that includes audible alarms, SMS notifications, and data logging.
    
*   Incorporating a panic button for manual distress alerts.
    
*   Enabling cloud integration for remote monitoring and analytics.
    

This system is compact, portable, and user-friendly, ensuring accessibility and effectiveness in real-world scenarios.

Hardware Resource Mapping
-------------------------

| Component                  | Functionality                                                                                               |
|----------------------------|-------------------------------------------------------------------------------------------------------------|
| Arduino UNO                | Serves as the main microcontroller for processing sensor data from the accelerometer and gyroscope.         |
| MPU 6050 Shield            | Detects motion and orientation changes to identify potential falls using gyroscopic and accelerometer data. |
| GSM/GPRS Module (NEO-6M)   | Sends SMS alerts and enables cellular communication for emergency notifications.                            |
| NodeMCU                    | Facilitates cloud integration for IoT connectivity, remote monitoring, and data logging.                    |
| Buzzer                     | Activates an audible alarm upon detecting a fall or emergency.                                              |
| Touch Sensor               | Functions as a panic button for manual distress signals by the elderly user.                                |
| 2500mAH Power Bank/Battery | Ensures portability and uninterrupted power supply to the system.                                           |
| LED indicators             | Provides visual cues for system status, such as power on, alert activation, or fault detection.             |
| Breadboard and Jump Wires  | Enables circuit prototyping and seamless interconnection of hardware components.                            |

Literature Survey
-----------------

### IoT in Elderly Care

<p>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;IoT has been widely used in elderly care for real-time health monitoring, fall detection, and safety systems. Research highlights the effectiveness of combining wearable and ambient sensors for accurate data collection and cloud-based analytics for emergency response.</p>

*   *Source*: IoT Applications in Healthcare Systems, IEEE, 2023.
    

### MPU 6050 in Fall Detection

<p>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;The MPU 6050 gyroscope and accelerometer are commonly used for fall detection systems due to their precision in motion sensing and low power consumption. Algorithms such as threshold-based and machine learning models effectively process sensor data.</p>

*   *Source*: Sensor Fusion Techniques in Wearable Devices, Elsevier, 2022.
    

### GSM and IoT Integration

<p>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;GSM modules integrated with IoT devices enhance emergency communication by providing SMS alerts when cloud connectivity is unavailable, ensuring redundancy in the system.</p>

*   *Source*: IoT for Emergency Management, Springer, 2023.
    

### NodeMCU for Cloud IoT Systems

<p>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;NodeMCU, powered by ESP8266, enables seamless integration with cloud platforms for data logging, visualization, and remote monitoring. It is a preferred choice for IoT projects due to its affordability and efficiency.</p>

*   *Source*: IoT Frameworks for Real-Time Data Processing, ACM, 2023.
    

### User-Centric Design in Elderly Systems

<p>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;Incorporating panic buttons and auditory/visual indicators in elderly care systems ensures usability and inclusivity, reducing the learning curve for end-users.</p>

*   *Source*: Design Principles for Aging Populations, Human Factors Journal, 2021.
    

Relevant SDGs
-------------

#### SDG 3 - Good Health and Well-Being
To ensure healthy lives and promote well-being for all at all ages.
<p align="center">
  <img src="https://github.com/ramagururadhakrishnan/UN-SDG/blob/main/Assets/G3.png?raw=true" width="350" />
  <img src="https://github.com/ramagururadhakrishnan/UN-SDG/blob/main/Assets/3_SDG.gif?raw=true" width="350" />
</p>

#### SDG 9 - Industry, Innovation and Infrastructure
Leveraging IoT technologies to develop innovative solutions for elderly care.

<p align="center">
  <img src="https://github.com/ramagururadhakrishnan/UN-SDG/blob/main/Assets/G9.png?raw=true" width="350" />
  <img src="https://github.com/ramagururadhakrishnan/UN-SDG/blob/main/Assets/9_SDG.gif?raw=true" width="350" />
</p>

#### SDG 11 - Sustainable Cities and Communities 
Promoting inclusive and sustainable urban environments that support aging populations.

<p align="center">
  <img src="https://github.com/ramagururadhakrishnan/UN-SDG/blob/main/Assets/G11.png?raw=true" width="350" />
  <img src="https://github.com/ramagururadhakrishnan/UN-SDG/blob/main/Assets/11_SDG.gif?raw=true" width="350" />
</p>

This project builds upon these findings to develop a robust, cost-effective, and user-friendly system tailored for elderly safety and monitoring.
