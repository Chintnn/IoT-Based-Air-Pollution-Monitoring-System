#include <ESP8266WiFi.h>
#include <HTTPClient.h>

const char* ssid = "YOUR_WIFI_SSID";  // Replace with your WiFi SSID
const char* password = "YOUR_WIFI_PASSWORD";  // Replace with your WiFi password
const char* apiKey = "YOUR_THINGSPEAK_API_KEY";  // Replace with your ThingSpeak API Key
const char* server = "http://api.thingspeak.com/update";

const int mq135Pin = A0;  // MQ135 Sensor Pin
const int buzzerPin = D1; // Buzzer Pin
const int threshold = 500; // Threshold for Air Quality

WiFiClient client;

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    Serial.print("Connecting to WiFi");

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nConnected to WiFi");

    pinMode(mq135Pin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    digitalWrite(buzzerPin, LOW); // Turn off buzzer initially
}

void loop() {
    int sensorValue = analogRead(mq135Pin); // Read MQ135 sensor
    float voltage = sensorValue * (3.3 / 1023.0); // Convert to voltage (for 3.3V NodeMCU)

    Serial.print("Sensor Value: ");
    Serial.print(sensorValue);
    Serial.print(" | Voltage: ");
    Serial.println(voltage);

    // Check air quality threshold
    if (sensorValue > threshold) {
        digitalWrite(buzzerPin, HIGH); // Turn on buzzer
    } else {
        digitalWrite(buzzerPin, LOW); // Turn off buzzer
    }

    // Send Data to ThingSpeak
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        String url = String(server) + "?api_key=" + apiKey + "&field1=" + String(sensorValue) + "&field2=" + String(voltage);
        
        http.begin(url);
        int httpResponseCode = http.GET();
        if (httpResponseCode > 0) {
            Serial.println("Data sent to ThingSpeak successfully.");
        } else {
            Serial.print("Error sending data: ");
            Serial.println(httpResponseCode);
        }
        http.end();
    } else {
        Serial.println("WiFi Disconnected. Reconnecting...");
        WiFi.begin(ssid, password);
    }

    delay(15000); // ThingSpeak allows updates every 15 seconds
}
