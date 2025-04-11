#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu1 = 25;
int lampu2 = 33;

void setup() {
  Serial.begin(115200);   // Inisialisasi komunikasi Serial
  Serial.println("ESP32 Blinking LED Bergantian");

  // Atur pin sebagai OUTPUT
  pinMode(lampu1, OUTPUT);
  pinMode(lampu2, OUTPUT);
}

void loop() {
  // Nyalakan lampu1, matikan lampu2
  digitalWrite(lampu1, HIGH);
  digitalWrite(lampu2, LOW);
  Serial.println("Lampu 1 ON, Lampu 2 OFF");
  delay(1000); // Tunggu 1 detik

  // Matikan lampu1, nyalakan lampu2
  digitalWrite(lampu1, LOW);
  digitalWrite(lampu2, HIGH);
  Serial.println("Lampu 1 OFF, Lampu 2 ON");
  delay(1000); // Tunggu 1 detik sebelum mengulang
}