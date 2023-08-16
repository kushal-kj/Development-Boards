String myname;
String msg1="what is your name?";
String msg2="Hello ";
String msg3=" ,welcome to arduino";

void setup() {

  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {

  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available()==0){

}
myname=Serial.readString();  //to read string type
Serial.print(msg2);
Serial.print(myname);
Serial.println(msg3);

}
