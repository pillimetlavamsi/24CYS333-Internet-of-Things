# **24CYS333 - Internet of Things**

## **Lab 1: Fine-Tuning Project Topic, Hardware Resource Mapping, and Literature Survey**

### **Week 1**

---

### **1. Project Topic**  

**IoT-based Intrusion Detection System Using PIR and Ultrasonic Sensors with Cloud Integration**  

This project seeks to design an IoT-based Intrusion Detection System (IDS) that utilizes:  
- **PIR sensors** for motion detection.  
- **Ultrasonic sensors** for proximity measurement.  
- **Cloud integration** for real-time data processing, storage, and system scalability.  

---

### **2. Hardware Requirements**  

| **Component**               | **Function**                                               | **Reason for Inclusion**                                                                 |
|------------------------------|-----------------------------------------------------------|-----------------------------------------------------------------------------------------|
| **Raspberry Pi 4**           | Acts as the central processing unit, handling sensor data and communication. | Provides computational power for processing sensor data, managing communication modules, and sending alerts to users. |
|                              |                                                           | Supports USB boot and network boot, eliminating the need for an SD card.               |
| **PIR Sensor (HC-SR501)**    | Detects motion by sensing infrared radiation changes from humans or animals. | Essential for motion detection; adjustable, reliable, and affordable.                  |
| **Ultrasonic Sensor (HC-SR04)** | Measures distance to detect objects or intrusions beyond the PIR range.  | Enhances detection accuracy, reducing false positives.                                 |
| **Smartphone (Phone Camera)**| Captures images or videos for visual confirmation of intrusions. | Acts as a cost-effective alternative to IP cameras; enables video surveillance.         |
|                              |                                                           | Connects via Wi-Fi or Bluetooth to stream footage to the Raspberry Pi or cloud.         |
| **Wi-Fi Module (ESP8266 or ESP32)** | Provides wireless communication between the Raspberry Pi and cloud or mobile devices. | Enables IoT functionality for sending alerts and notifications over a network.         |
| **Buzzer or Alarm**          | Produces an audible alert when an intrusion is detected.  | Provides immediate local notification for nearby individuals.                          |
| **LED Indicators**           | Provides visual feedback for system status (e.g., active, idle, triggered). | Helps monitor the operational state of the system locally.                              |
| **Power Supply (5V Adapter)**| Powers the Raspberry Pi, sensors, and communication modules. | Ensures stable operation of all components.                                            |
| **USB Drive (or SSD)**       | Storage medium for booting the Raspberry Pi and temporary data storage. | Used for booting the OS and storing temporary files. Can replace SD cards.             |
| **Breadboard**               | Facilitates prototyping and wiring of components.         | Allows modular connections without soldering.                                          |
| **Jumper Wires**             | Connects components to the Raspberry Pi or breadboard.    | Essential for creating circuit setups.                                                 |
| **Resistors (e.g., 330Ω)**   | Protects LEDs and other components by limiting current flow. | Prevents damage to sensitive components from overcurrent.                               |

---

### **3. Literature Survey Results**  

#### **Existing Solutions**  

1. **IoT Intrusion Detection System Using Rule-Based and Machine Learning Approach**  
   - Combines traditional rule-based systems and neural networks for anomaly detection.  
   - [Link](https://www.scitepress.org/Link.aspx?doi=10.5220/0009342200570068)  

2. **IoT-Based Intrusion Detection System Using CNN and DNN**  
   - Uses convolutional and deep neural networks for detecting attack patterns.  
   - [Link](https://www.mdpi.com/2073-431X/12/2/34), [Link](https://peerj.com/articles/cs-721/)  

3. **PIR Sensor-based Detection**  
   - Detects motion using PIR sensors, often paired with cameras.  
   - [Link](https://ieeexplore.ieee.org/abstract/document/8256877)  

---

### **4. Research Gaps**  

- **Integration of Multiple Sensors:**  
  Combining different sensor types for improved accuracy is underexplored.  

- **Energy Efficiency:**  
  IoT intrusion systems often neglect energy-efficient designs for prolonged use.  

- **Mobile Device Integration:**  
  Few systems utilize smartphones for notifications or video recording, reducing hardware costs.  

- **Localized Processing:**  
  Heavy reliance on cloud platforms introduces latency and privacy concerns.  

---

### **5. Relevance of Our Project**  

1. **Integration of Multiple Sensors:**  
   Combines PIR, ultrasonic sensors, and cameras to reduce false positives.  

2. **Cost-Effective Solution:**  
   Leverages smartphones for video recording and notifications, making it affordable.  

3. **Real-Time Alerts:**  
   Provides instant updates via IoT communication modules.  

Our project tackles identified gaps by incorporating **sensor fusion**, **localized processing (using Raspberry Pi)**, and **mobile integration**, making it practical and innovative.
