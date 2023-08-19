#include <Servo.h>

int buttonPin=7;
int servoPin=3;
int currentbuttonState;
int prevButtonState;
int angle=0;                 //SERVOMOTOR CURRENT ANGLE
Servo servo;           // create servo object to control a servo

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT_PULLUP);
  servo.attach(servoPin);
  servo.write(angle);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  currentbuttonState=digitalRead(buttonPin);

  if(prevButtonState==LOW && currentbuttonState==HIGH)
  {
    Serial.println("button is pressed");

    // change angle of servo motor
    if(angle == 0)
      angle = 90;
    else if(angle == 90)
      angle = 0;

    // control servo motor arccoding to the angle
    servo.write(angle);

  }

  prevButtonState=currentbuttonState;

}
