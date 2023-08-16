int speedpin=5;
int directionpin1=4;
int directionpin2=3;
int motorspeed=0; //lowest speed=105
int button1pin=12;
int button2pin=13;
int button1val;
int button2val;
int dt=500;

void setup() {
  // put your setup code here, to run once:
pinMode(speedpin,OUTPUT);
pinMode(directionpin1,OUTPUT);
pinMode(directionpin2,OUTPUT);
pinMode(button1pin,INPUT);
pinMode(button2pin,INPUT);
digitalWrite(button1pin,HIGH);
digitalWrite(button2pin,HIGH);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
button1val=digitalRead(button1pin);
button2val=digitalRead(button2pin);

Serial.print("motor speed= ");
Serial.println(motorspeed);


if(button1val==0){
  motorspeed=motorspeed-10;
  delay(dt);
}
if(button2val==0){
  motorspeed=motorspeed+10;
  delay(dt);
}

if(motorspeed>255){
  motorspeed=255;
}
if(motorspeed<-255){
  motorspeed=-255;
}

if(motorspeed==10){
  motorspeed=105;
}
if(motorspeed==-10){
  motorspeed=-105;
}
if(motorspeed==100 || motorspeed==95)
{
  motorspeed=0;
}
if(motorspeed==-100 || motorspeed==-95)
{
  motorspeed=0;
}
if(motorspeed==0)
{
  analogWrite(speedpin,0);
}
if(motorspeed<0)
{
digitalWrite(directionpin1,LOW);
digitalWrite(directionpin2,HIGH);
analogWrite(speedpin,abs(motorspeed));
}

if(motorspeed>0)
{
digitalWrite(directionpin1,HIGH);
digitalWrite(directionpin2,LOW);
analogWrite(speedpin,motorspeed);
}


}
