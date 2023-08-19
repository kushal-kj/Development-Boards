int potval;
int delaytime=100;
int led=4;
int potpin=A0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potpin,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval=analogRead(potpin);
  Serial.println(potval);
  delay(delaytime);

while(potval>1000)
{
digitalWrite(led,HIGH);
potval=analogRead(potpin);
Serial.println(potval);
delay(delaytime);
}
digitalWrite(led,LOW);
}



