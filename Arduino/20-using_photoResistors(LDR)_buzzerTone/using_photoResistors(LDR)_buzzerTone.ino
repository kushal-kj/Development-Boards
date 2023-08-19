int lightpin=A1;
int buzz=8;
float lightval;
float delayT;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightpin,INPUT);
  pinMode(buzz,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightval=analogRead(lightpin);
Serial.println(lightval);
delayT=((3./100.)*(lightval-400))+1;
digitalWrite(buzz,HIGH);
delay(delayT);
digitalWrite(buzz,LOW);
delay(delayT);
}
