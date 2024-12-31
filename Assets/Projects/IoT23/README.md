# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT #23
## Team Information
- *IoT Team Number:* 23

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
