int mypin=A2;
float readval;
float v2;
int delaytime=500;
int led1=3;
int led2=6;
int led3=10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(mypin,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readval=analogRead(mypin);
  v2=(5./1023.)*readval;
  Serial.println(v2);

//case 1
  if(v2>=0.0 && v2<2.0)
  {
digitalWrite(led1,HIGH);
    }
    
if(v2>=2.0)
{
  digitalWrite(led1,LOW);  
}
//case 2

  if(v2>=2.0 && v2<4.0)
  {
digitalWrite(led2,HIGH);
    }
if(v2<2.0 || v2>=4.0)
{
  digitalWrite(led2,LOW);
}
//case 3
if(v2>=4.0)
{
  digitalWrite(led3,HIGH);
}
else
{
  digitalWrite(led3,LOW);
}
  delay(delaytime);
  }
