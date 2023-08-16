#include<Servo.h>
int light=A4;
int lightval;
int dt=250;
int servopin=11;
int servopos=0;
Servo myservo;
int angle;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightval,INPUT);
myservo.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
lightval=analogRead(light);
 Serial.print("lightval = ");
 Serial.print(lightval);

// if(lightval>800 && lightval<900){
//   myservo.write(90);
//   Serial.println(lightval);
//   delay(dt);
// }
// if(lightval>=900){
//   myservo.write(180);
//   Serial.println(lightval);
//   delay(dt);
// }
// if(lightval<800){
//   myservo.write(0);
//   Serial.println(lightval);
//   delay(dt);
// }

angle=(-17./40.)*lightval+17.*900./40.;
myservo.write(angle);
 Serial.print(" , angle = ");
 Serial.println(angle);
delay(dt);
}
