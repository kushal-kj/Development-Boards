int speedpin=5;
int directionpin1=4;
int directionpin2=3;
int motorspeed=105;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedpin,OUTPUT);
  pinMode(directionpin1,OUTPUT);
  pinMode(directionpin2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(directionpin1,LOW);
digitalWrite(directionpin2,HIGH);
analogWrite(speedpin,255);
delay(50);
analogWrite(speedpin,motorspeed);
delay(5000);

}
