int ledState=0;
int led=8;
int buttonpin=12;
int buttonNew;
int buttonOld=1;
int dt=100;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(buttonpin,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew=digitalRead(buttonpin);
Serial.println(buttonNew);

if(buttonOld==0 && buttonNew==1){
  if(ledState==0){
    digitalWrite(led,HIGH);
    ledState=1;
  }
  else{
    digitalWrite(led,LOW);
    ledState=0;
  }
}
buttonOld=buttonNew;
delay(dt);



}