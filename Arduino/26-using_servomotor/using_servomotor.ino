#include <Servo.h>

int servopin=9;
int servopos=0;
Servo myservo;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("what angle for servo? ");
while(Serial.available()==0){

}
servopos=Serial.parseInt(); //user input
myservo.write(servopos);

}
