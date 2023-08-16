int buzz=8;
int delaytime1=1;
int delaytime2=2;
int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=1;i<=100;i++){
    digitalWrite(buzz,HIGH);
    delay(delaytime1);
    digitalWrite(buzz,LOW);
    delay(delaytime2);
  }
    for(i=1;i<=100;i++){
    digitalWrite(buzz,HIGH);
    delay(delaytime2);
    digitalWrite(buzz,LOW);
    delay(delaytime2);
  }
}
