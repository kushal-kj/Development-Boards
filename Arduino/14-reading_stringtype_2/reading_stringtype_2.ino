String colour;
String msg1="which colour led do you want to turn ON?";
int red=8;
int yellow=12;
int green=13;
int i;
int delaytime;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while(Serial.available()==0){

  }
colour=Serial.readString();

if(colour=="red" || colour=="RED" ){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
}
if(colour=="green" || colour=="GREEN"){
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
}
if(colour=="yellow" || colour=="YELLOW"){
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
}
}
