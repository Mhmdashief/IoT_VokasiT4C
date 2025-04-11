#include <Arduino.h>  
int lampu = 33;
int lampu2 = 25;
int lampu3 = 26;


void setup() {
    Serial.begin(115200);  
    Serial.println("ESP32 Blinking LED");

    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
    pinMode(lampu3, OUTPUT);
}

void loop() {

    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, LOW);
    Serial.println("LED 1 ON");
    delay(3000); 
    
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    digitalWrite(lampu3, LOW);
    Serial.println("LED 2 ON");
    delay(1000); 

    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, LOW);
    digitalWrite(lampu3, HIGH);
    Serial.println("LED 3 ON");
    delay(3000); 
}