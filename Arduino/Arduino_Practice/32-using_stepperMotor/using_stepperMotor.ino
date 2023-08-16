#include <Stepper.h>
int stepsPerRevolution=2038;
int motspeed=10; //RPM
Stepper mystepper(stepsPerRevolution,8,9,10,11);
int dt=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
mystepper.setSpeed(motspeed);
}

void loop() {
  // put your main code here, to run repeatedly:
mystepper.step(stepsPerRevolution)  ;
delay(dt);
mystepper.step(-stepsPerRevolution)  ;
delay(dt);
}
