#include<Servo.h>

int xpin=A0;
int ypin=A1;
int sw=8;
int xval;
int yval;
int swval;
int dt=250;

int servo1=10;
int servo2=11;
int buzz=7;
int Xangle;
int Yangle;

Servo myservo1;
Servo myservo2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xpin,INPUT);
  pinMode(ypin,INPUT);
  pinMode(sw,INPUT);
  pinMode(servo1,OUTPUT);
  pinMode(servo2,OUTPUT);
  pinMode(buzz,OUTPUT);
  myservo1.attach(servo1);
  myservo2.attach(servo2);

  digitalWrite(sw,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  xval=analogRead(xpin);
Xangle=(180./1023.)*xval;  
myservo1.write(Xangle);

yval=analogRead(ypin);
Yangle=(180./1023.)*yval;  
myservo2.write(Yangle);

swval=digitalRead(sw);
delay(dt);

Serial.print("x value= ");
Serial.print(xval);
Serial.print(" , y value= ");
Serial.print(yval);
Serial.print(" , x angle= ");
Serial.print(Xangle);
Serial.print(" , y angle= ");
Serial.print(Yangle);
Serial.print(" , switch state=");
Serial.println(swval);

if(swval==0){
  digitalWrite(buzz,HIGH);

}
else{
    digitalWrite(buzz,LOW);

}

}
