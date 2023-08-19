
int mynumber;
String msg="enter the number of time you want to blink led:";
String msg2="your number is:";
int led=8;
int i;
int delaytime=750;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){

}
mynumber=Serial.parseInt();
for(i=1;i<=mynumber;i++){
  digitalWrite(led,HIGH);
  delay(delaytime);
  digitalWrite(led,LOW);
  delay(delaytime);
}
}
