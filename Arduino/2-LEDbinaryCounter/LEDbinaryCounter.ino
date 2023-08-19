int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int waittime=1500;

void setup() {
  // put your setup code here, to run once:
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  delay(waittime);

  digitalWrite(pin2,LOW);//0
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
delay(waittime);

 digitalWrite(pin2,LOW);//1
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
delay(waittime);

 digitalWrite(pin2,LOW);//2
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
delay(waittime);

 digitalWrite(pin2,LOW);//3
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
delay(waittime);

digitalWrite(pin2,LOW);//4
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
delay(waittime);

digitalWrite(pin2,LOW);//5
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
delay(waittime);

digitalWrite(pin2,LOW);//6
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
delay(waittime);

digitalWrite(pin2,LOW);//7
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
delay(waittime);

digitalWrite(pin2,HIGH);//8
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
delay(waittime);

digitalWrite(pin2,HIGH);//9
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
delay(waittime);

digitalWrite(pin2,HIGH);//10 or A
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
delay(waittime);

digitalWrite(pin2,HIGH);//11 OR B
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
delay(waittime);

digitalWrite(pin2,HIGH);//12 OR C
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
delay(waittime);

digitalWrite(pin2,HIGH);//13 OR D
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
delay(waittime);

digitalWrite(pin2,HIGH);//14 OR E
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
delay(waittime);

digitalWrite(pin2,HIGH);//15 OR F
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
delay(waittime);



}
