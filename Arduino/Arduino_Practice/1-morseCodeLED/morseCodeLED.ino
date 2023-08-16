//morse code : SOS-> ..._ _ _...
int ledpin=12;
int dit=150;
int dah=600;
int longwait=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin,HIGH);
delay(dit);
digitalWrite(ledpin,LOW);
delay(dit);
digitalWrite(ledpin,HIGH);
delay(dit);
digitalWrite(ledpin,LOW);
delay(dit);
digitalWrite(ledpin,HIGH);
delay(dit);
digitalWrite(ledpin,LOW);
delay(dah);

digitalWrite(ledpin,HIGH);
delay(dah);
digitalWrite(ledpin,LOW);
delay(dah);
digitalWrite(ledpin,HIGH);
delay(dah);
digitalWrite(ledpin,LOW);
delay(dah);
digitalWrite(ledpin,HIGH);
delay(dah);
digitalWrite(ledpin,LOW);
delay(dah);

digitalWrite(ledpin,HIGH);
delay(dit);
digitalWrite(ledpin,LOW);
delay(dit);
digitalWrite(ledpin,HIGH);
delay(dit);
digitalWrite(ledpin,LOW);
delay(dit);
digitalWrite(ledpin,HIGH);
delay(dit);
digitalWrite(ledpin,LOW);
delay(dit);

delay(longwait);

}
