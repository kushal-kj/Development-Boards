int speedpin=5;
int directionpin1=4;
int directionpin2=3;
int motorspeed=255;
int tiltpin=2;
int tiltval;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedpin,OUTPUT);
  pinMode(directionpin1,OUTPUT);
  pinMode(directionpin2,OUTPUT);
  pinMode(tiltpin,INPUT);
  digitalWrite(tiltpin,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(directionpin1,LOW);
digitalWrite(directionpin2,HIGH);
tiltval=digitalRead(tiltpin);
Serial.println(tiltval);

if(tiltval==0)
{
  analogWrite(speedpin,motorspeed);
}
if(tiltval==1)
{
  analogWrite(speedpin,0);
}

}
