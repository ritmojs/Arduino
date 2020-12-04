#include <Stepper.h>
const int spr=40;
Stepper steper (spr,8,9,10,11);
void setup() {
  steper.setSpeed (2);
  Serial.begin (9600);
}
void loop() {
  steper.step (spr);
  delay (200);
  steper.step (-spr);
  delay (200);
}
