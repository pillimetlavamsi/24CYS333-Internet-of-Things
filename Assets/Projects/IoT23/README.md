# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

---

# IoT-Based Smart Lighting System with Adaptive Brightness and Motion Detection


## Team Information
- *IoT Team Number:* 23  
- *Team Members:*  
  - Pavan Shanmukha Madhav Gunda (CB.EN.U4CYS22049)  
  - Anurag Reddy (CB.EN.U4CYS22069)  
  - Vishal RS (CB.EN.U4CYS22074)  

---

## Project Overview
*Title:* IoT-Based Smart Lighting System with Adaptive Brightness and Motion Detection  
*Objective:* To implement a smart lighting solution that enhances energy efficiency by utilizing motion detection and light adaptation, while showcasing real-time energy conservation statistics on a customer dashboard.

### Features
1. *Motion-Activated Lighting:* Lights turn on when motion is detected and turn off after a few seconds of inactivity.
2. *Adaptive Brightness:* Adjusts light intensity based on ambient light conditions.
3. *Energy Conservation:* Tracks and displays energy savings on a user-friendly dashboard.
4. *Real-Time Monitoring:* Provides efficiency and energy conservation statistics to end users.

---

## Components Used
1. *ESP32 (Microcontroller):* Controls the entire system.
2. *PIR Sensor:* Detects motion in the vicinity.
3. *LDR Sensor:* Measures ambient light for brightness adaptation.
4. *LED Bulb:* Light source for the system.
5. *5V/3.3V Power Adapter:* Supplies power to sensors.
6. *IR Sensor:* Additional motion detection functionality.
7. *Relay Module:* Controls the LED bulb.
8. *Voltage Regulators:* Ensures stable power supply to components.
9. *Jumper Wires and Breadboard:* For circuit connections.
10. *PMIC (Power Management IC):* Manages power distribution efficiently.

---

## Research Reference
Read the complete research paper:  
[IoT-based Real-Time Street Lights Controlling on Motion Detection](https://www.researchgate.net/publication/373680542_IoT_based_Real_Time_Street_Lights_controlling_on_Motion_Detection)

---

## Project Explanation
This IoT project automates the lighting system using motion and brightness detection. The system performs as follows:
1. *Motion Detection:* The PIR sensor activates the LED bulb when motion is detected.
2. *Brightness Control:* The LDR sensor ensures that lights adapt to the ambient light conditions.
3. *Energy Monitoring:* The system calculates and displays energy savings in real-time on a customer-facing dashboard.

---

## How It Works
1. *Detection Phase:* The PIR and IR sensors monitor the area for motion.
2. *Activation Phase:* The relay module activates the LED bulb upon detecting motion.
3. *Deactivation Phase:* The system turns off the light after a predefined interval of no motion.
4. *Dashboard Integration:* Energy efficiency statistics and conservation data are visualized on the customer endpoint dashboard.

---

## Contribution to SDGs
This project aligns with the following *United Nations Sustainable Development Goals (SDGs):*

1. *SDG 7: Affordable and Clean Energy*
   - Enhances energy efficiency by automating lighting systems and reducing unnecessary consumption.
2. *SDG 9: Industry, Innovation, and Infrastructure*
   - Demonstrates innovation in infrastructure through the use of IoT and adaptive technology.
3. *SDG 11: Sustainable Cities and Communities*
   - Supports sustainable urban development by reducing environmental impact.
4. *SDG 12: Responsible Consumption and Production*
   - Promotes efficient energy usage and reduces waste.
5. *SDG 13: Climate Action*
   - Contributes to global efforts in mitigating climate change by reducing energy waste.

---

## Future Enhancements
- Integration with voice-controlled assistants (e.g., Alexa, Google Assistant).
- Advanced analytics to predict energy consumption trends.
- Solar-powered lighting to further enhance sustainability.

---
