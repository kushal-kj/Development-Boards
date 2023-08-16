int led=9;
int button1=4;
int button2=12;
int buzz=2;
int button1val;
int button2val;
int dt=500;
int ledbright=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(buzz,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  button1val=digitalRead(button1);
  button2val=digitalRead(button2);
Serial.print("button1 = ");
Serial.print(button1val);
Serial.print(" , ");
Serial.print("button2 = ");
Serial.println(button2val);
delay(dt);

if(button1val==0){
ledbright=ledbright+5;

}
if(button2val==0){
  ledbright=ledbright-5;

}
Serial.println(ledbright);
if(ledbright>=255){
  ledbright=255;
  digitalWrite(buzz,HIGH);
  delay(dt);
    digitalWrite(buzz,LOW);
    Serial.println("BUZZ HIGH");

}
if(ledbright<0){
  ledbright=0;
    digitalWrite(buzz,HIGH);
     digitalWrite(buzz,HIGH);
     delay(dt);
    digitalWrite(buzz,LOW);
    Serial.println("BUZZ LOW");

}
analogWrite(led,ledbright);

}
