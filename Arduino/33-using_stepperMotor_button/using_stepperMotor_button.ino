#include<Stepper.h>
int stepsPerRevolution=2048;
int motspeed=5; //RPM
Stepper mystepper(stepsPerRevolution,8,9,10,11);
int dt=500;
int button=4;
int motordirection=1;
int buttonvalnew;
int buttonvalold=1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mystepper.setSpeed(motspeed);
pinMode(button,INPUT);
digitalWrite(button,HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
buttonvalnew=digitalRead(button);
if(buttonvalold==1 && buttonvalnew==0)
{
  motordirection=motordirection*(-1);
}
mystepper.step(motordirection*1);

  delay(dt);
  mystepper.step(-stepsPerRevolution);
  delay(dt);
    buttonvalold=buttonvalnew;
}
