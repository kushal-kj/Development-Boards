int led=8;
int buttonpin=12;
int buttonread;
int dt=100;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(buttonpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonread=digitalRead(buttonpin);
Serial.println(buttonread);
delay(dt);
if(buttonread==1){
  digitalWrite(led,LOW);
}
else{
digitalWrite(led,HIGH);
}

}
