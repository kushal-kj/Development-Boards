int buzz=10;
float potval;
int potpin=A1;
float toneVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzz,OUTPUT);
  pinMode(potpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval=analogRead(potpin);
  toneVal=(9940./1023.)*potval+60;
analogWrite(buzz,HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzz,LOW);
delayMicroseconds(toneVal);

}
