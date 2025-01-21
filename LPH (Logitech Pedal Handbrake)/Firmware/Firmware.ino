#include <Arduino.h>
#include <BleGamepad.h>

const int ADCPIN = 2;
BleGamepad bleGamepad;

void setup() {
    Serial.begin(115200);
    Serial.println("Starting BLE LPH");
    bleGamepad.begin();
    pinMode(ADCPIN, INPUT);
}

void loop() {
   if (bleGamepad.isConnected()) {
      int analogValue = analogRead(ADCPIN);
      float mappedValue = map(analogValue, 0, 4095, 32767, -32767);  // Z Axis Analogue Value Mapping
      bleGamepad.setZ(mappedValue);  // ADCPIN to set Z Axis
      delay(10);
   }
}
