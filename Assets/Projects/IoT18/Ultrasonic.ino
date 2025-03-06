/*Ultra sonic*/
#include <WiFi.h>
#include <HTTPClient.h>

// Ultrasonic Sensor & Buzzer Pins
#define TRIG_PIN 4 
#define ECHO_PIN 18
#define BUZZER_PIN 22

float new_delay;

// WiFi Credentials
const char* ssid = "RaspberryPi3";
const char* password = "12345678";

// Raspberry Pi Server URL (Replace with actual IP)
const char* serverUrl = "http://192.168.4.1:5000/alert";

void setup() {
    Serial.begin(115200);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    // Connect to WiFi
    WiFi.begin(ssid, password);
    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nConnected to WiFi!");
}

long getDistance() {
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH, 30000); // 30ms timeout
    if (duration == 0) return -1; // No echo received

    long distance = (duration / 2) / 29.1; // Convert time to distance (cm)
    return distance;
}

void sendAlert() {
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        http.begin(serverUrl);
        http.addHeader("Content-Type", "application/json");

        String jsonPayload = "{\"alert\": \"Intruder detected!\"}";
        int httpResponseCode = http.POST(jsonPayload);

        Serial.print("HTTP Response Code: ");
        Serial.println(httpResponseCode);

        http.end();
    } else {
        Serial.println("WiFi Not Connected - Cannot Send Alert!");
    }
}

void loop() {
    long distance = getDistance();
    new_delay = (distance * 3) + 30; // Adjust buzzer delay based on distance

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance > 0 && distance < 50) { // If an object is detected within 50 cm
        Serial.println("🚨 Intruder Alert! Activating Buzzer...");
        digitalWrite(BUZZER_PIN, HIGH);
        delay(new_delay);
        digitalWrite(BUZZER_PIN, LOW);
        
        sendAlert(); // Send alert to Raspberry Pi
    } else {
        digitalWrite(BUZZER_PIN, LOW);
    }

    delay(200);
}
