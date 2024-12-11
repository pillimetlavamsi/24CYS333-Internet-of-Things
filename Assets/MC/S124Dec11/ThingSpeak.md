# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>

## ThingSpeak

- Please create a account in [ThingSpeak](https://thingspeak.mathworks.com/)
- Create a Channel
- Create Field(s) under a Channel
- Get the WriteAPI 

```
// Load Wi-Fi and ThingSpeak library
#include <WiFi.h>
#include "ThingSpeak.h"

// Replace with your network credentials
const char* ssid = "<<Fill in with your SSID>>";
const char* password = "<<Your HotSpot Password"; 

WiFiClient  client;

// Replace with your ThingSpeak credentials
unsigned long myChannelNumber = 1830052; 
const char * myWriteAPIKey = "DAJ35CEQ078Y5B6X";

// Timer variables
unsigned long lastTime = 0;
unsigned long timerDelay = 30000;

// Variable to hold temperature readings
float temperatureC=10.0;


// Create a sensor object


void setup() {
  Serial.begin(115200);  //Initialize serial
 
  WiFi.mode(WIFI_STA);   
  
  ThingSpeak.begin(client);  // Initialize ThingSpeak
}

void loop() {
  if ((millis() - lastTime) > timerDelay) {
    
    // Connect or reconnect to WiFi
    if(WiFi.status() != WL_CONNECTED){
      Serial.print("Attempting to connect");
      while(WiFi.status() != WL_CONNECTED){
        WiFi.begin(ssid, password); 
        delay(5000);     
      } 
      Serial.println("\nConnected.");
    }

    temperatureC = analogRead(36); 
    Serial.print("Temperature (ºC): ");
    Serial.println(temperatureC);
    

    Serial.print("Temperature (ºC): ");

    
    // Write to ThingSpeak. There are up to 8 fields in a channel, allowing you to store up to 8 different
    // pieces of information in a channel.  Here, we write to field 1.
    int x = ThingSpeak.writeField(myChannelNumber, 1, temperatureC, myWriteAPIKey);
	
    //uncomment if you want to get temperature in Fahrenheit
    //int x = ThingSpeak.writeField(myChannelNumber, 1, temperatureF, myWriteAPIKey);

    if(x == 200){
      Serial.println("Channel update successful.");
    }
    else{
      Serial.println("Problem updating channel. HTTP error code " + String(x));
    }
    delay(15000);
    lastTime = millis();
  }
}
```