int lightpin=A0;
int lightval;
int delaytime1=250;
int redLed=13;
int greenLed=7;


void setup() {
  // put your setup code here, to run once:
pinMode(lightpin,INPUT);
pinMode(redLed,OUTPUT);
pinMode(greenLed,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

lightval=analogRead(lightpin);
//Serial.println(lightval);
//delay(delaytime1);
if(lightval>450)
{
  digitalWrite(redLed,HIGH);
Serial.println(lightval);
delay(delaytime1);
digitalWrite(greenLed,LOW);

}
else{
digitalWrite(greenLed,HIGH);
Serial.println(lightval);
delay(delaytime1);
  digitalWrite(redLed,LOW);


}
}
