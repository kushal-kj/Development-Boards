int speedpin=5;
int directionpin1=4;
int directionpin2=3;
int motorspeed;
int joystickpin=A1;
int joystickval;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedpin,OUTPUT);
  pinMode(directionpin1,OUTPUT);
  pinMode(directionpin2,OUTPUT);
  pinMode(joystickpin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
joystickval=analogRead(joystickpin);
Serial.println(joystickval);
delay(500);
motorspeed=analogRead(speedpin);

if(joystickval>=496){

motorspeed=(255./526.)*(joystickval-497);
digitalWrite(directionpin1,HIGH);
digitalWrite(directionpin2,LOW);


analogWrite(speedpin,motorspeed);


}
if(joystickval<496){

motorspeed=(255./-497.)*(joystickval-497);
digitalWrite(directionpin1,LOW);
digitalWrite(directionpin2,HIGH);
analogWrite(speedpin,motorspeed);

}


}
