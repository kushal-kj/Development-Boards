int yellow=6;
int red=10;
int yellowtime=500;
int redtime=500;
int yellowblink=3;
int redblink=5;
int i;

void setup() {
  // put your setup code here, to run once:
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

for(i=0;i<yellowblink;i++){  //yellow blink
digitalWrite(yellow,HIGH);
delay(yellowtime);
digitalWrite(yellow,LOW);
delay(yellowtime);
}

for(i=0;i<redblink;i++){     //red blink
digitalWrite(red,HIGH);
delay(redtime);
digitalWrite(red,LOW);
delay(redtime);
}
}