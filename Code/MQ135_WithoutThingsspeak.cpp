#include <ESP8266WiFi.h>

const int mq135Pin = A0;  // Define the pin for the MQ135 sensor
const int buzzerPin = D1; // Choose a pin for the buzzer
const int threshold = 500; // Define a threshold value

void setup() {
    Serial.begin(115200);
    pinMode(mq135Pin, INPUT);   // Initialize the MQ135 sensor
    pinMode(buzzerPin, OUTPUT); // Initialize the buzzer pin
    digitalWrite(buzzerPin, LOW); // Keep buzzer off initially
}

void loop() {
    int sensorValue = analogRead(mq135Pin); // Read the analog value from the MQ135
    float voltage = sensorValue * (3.3 / 1023.0); // Convert to voltage (for 3.3V NodeMCU)

    Serial.print("Sensor Value: ");
    Serial.print(sensorValue); 
    Serial.print(" | Voltage: ");
    Serial.println(voltage);

    if (sensorValue > threshold) { // Check if it exceeds threshold
        digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    } else {
        digitalWrite(buzzerPin, LOW); // Turn off the buzzer
    }

    delay(1000); // Wait for a bit before the next reading
}
