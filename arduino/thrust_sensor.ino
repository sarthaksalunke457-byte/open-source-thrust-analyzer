#include "HX711.h"

HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(3, 2);     // DOUT, CLK
  scale.set_scale(2280.f);
  scale.tare();
}

void loop() {
  float thrust = scale.get_units(10);
  Serial.println(thrust);
  delay(100);
}
