 int potval;
 int potpin=A0;
int buzz=8;
//String msg="enter the number : ";
int delaytime=50;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(potpin,INPUT);
  pinMode(buzz,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Serial.println(msg);
 
/*while(Serial.available()==0){

}
mynum=Serial.parseInt();*/

 potval=analogRead(potpin);
  Serial.println(potval);
while(potval>600){
  digitalWrite(buzz,HIGH);
  potval=analogRead(potpin);
    Serial.println(potval);

 // delay(delaytime);
 // digitalWrite(buzz,LOW);
}
digitalWrite(buzz,LOW);

}
