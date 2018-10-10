#include <SoftwareSerial.h>

SoftwareSerial bt(10, 11);

void setup() {
  Serial.begin(38400);
  bt.begin(38400);
}

void loop() {
  if (Serial.available()) {
    auto a = Serial.read();
    Serial.write(a);
    bt.write(a);
  }
  if (bt.available()) {
    Serial.write(bt.read());
  }
}

