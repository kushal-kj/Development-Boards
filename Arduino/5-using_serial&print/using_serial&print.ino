int x=1;
int y=2;
int z;
int delaytime=750;
String mystring=" + ";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  z=x+y;
  Serial.print(x);
  Serial.print(mystring);
  Serial.print(y);
  Serial.print(" = ");
  Serial.println(z);
  delay(delaytime);
}
