#include <Servo.h>

Servo servoMain; // Define our Servo
int buzzer = 7;
int sound = 6;
int pot = A0;
int pot1 = A1;
int x;
int y;

int trigpin = 10;

int echopin = 11;

int distance;

float duration;

float cm;

void setup()

{
   pinMode(buzzer,OUTPUT);
   pinMode(sound,OUTPUT);

  Serial.begin(9600);

servoMain.attach(9); // servo on digital pin 10

pinMode(trigpin, OUTPUT);

pinMode(echopin, INPUT);

}

void loop()

{
   x = analogRead(pot) / 102,4;

  Serial.println(x);
  digitalWrite(buzzer, HIGH);
  delay(x);
  digitalWrite(buzzer, LOW);
  delay(x);
 y = analogRead(pot1) / 102,4;

  Serial.println(y);
  digitalWrite(sound, HIGH);
  delay(y);
  digitalWrite(sound, LOW);
  delay(y);
digitalWrite(trigpin, LOW);

delay(2);

digitalWrite(trigpin, HIGH);

delayMicroseconds(10);

digitalWrite(trigpin, LOW);

duration = pulseIn(echopin, HIGH);

cm = (duration/58.82);

distance = cm;

if(distance<30)

{

servoMain.write(180); // Turn Servo back to center position (90 degrees)

delay(30);

}

else{

servoMain.write(0);

delay(50);

}

}
