# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>
![](https://img.shields.io/badge/Lecture-2-orange) ![](https://img.shields.io/badge/Practical-3-orange) ![](https://img.shields.io/badge/Credits-3-orange) <br/>

## IoT#16 : IoT-based Crop Disease Detection System for Mango trees

Team Members:

Hemanth Kumaar J P(CB.EN.U4CYS22028)

Jose Rohit M(CB.EN.U4CYS22030)

Kaushik M(CB.EN.U4CYS22035)


Problem statement:

The project aims to design and develop an IoT-based model that collects real-time sensor data from crop fields and uploads it to the cloud. This data is analyzed using machine learning techniques on the cloud to make accurate and efficient decisions, thereby improving processing speed and reducing device complexity compared to similar architectures. The model will detect crop diseases and provide recommendations for the best pesticides to assist farmers in improving crop yield.

Proposed Solution:

Developing an IoT-based Crop Disease Detection System that leverages smart sensors, real-time monitoring, and cloud integration to identify and track crop diseases efficiently.
     The system utilizes environmental sensors (humidity, temperature, soil moisture, and leaf wetness) and imaging devices to collect data continuously from the field.
     Machine learning models analyze the collected data to detect early signs of diseases, enabling farmers to take timely preventive actions.
     Integration of real-time tracking and automated alerts via mobile/web interfaces ensures timely updates for farmers.
     Maintenance includes periodic sensor calibration and health monitoring to ensure reliability.
     
Hardware Requirements:
1. Arduino Board : Acts as the central microcontroller for data collection and transmission.  
2. Sensors :  
   - Temperature Sensor (e.g., LM35, DHT22): Monitors ambient temperature.  
   - Humidity Sensor (e.g., DHT22): Measures air moisture levels.  
   - Color Sensor (e.g., TCS3200): Detects variations in leaf color, which can indicate diseases.  
3. Wi-Fi Module (e.g., ESP8266 or ESP32): Enables data transmission to a server or cloud platform.  
4. Battery:  Rechargeable lithium-ion battery or any suitable power source to ensure uninterrupted operation.  


Software Requirements:
1. Arduino IDE : For programming the Arduino board and uploading the code.  
2. Hardware Programming : Written in Arduino C/C++ for controlling sensors and modules.  
3. Server Back-End :  
   - Python : For server-side logic and communication with hardware.  
   - MySQL Database : For storing sensor data and logs for analysis.

Sustainable Development Goals: 

SDG 1: Zero Hunger
By improving early detection and prevention of crop diseases, the project supports sustainable agriculture and increases food production, ensuring food security and reducing hunger.

SDG 2: Good Health and Well-being
Healthier crops lead to higher quality and safer food, preventing health risks associated with consuming infected crops.

Reference:

Nadumani, P. G *IoT Based Crop Disease Detection* [GitHub repository]. [GitHub repository](https://github.com/PraveenGirishNadumani/iotBasedCropDiseaseDetection/tree/master)


