int relay=8;
int delayTime=500;

void setup() {

  // put your setup code here, to run once:
  pinMode(relay,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay,LOW);
  delay(delayTime);
  digitalWrite(relay,HIGH);
  delay(delayTime);

}
