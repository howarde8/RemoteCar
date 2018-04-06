
#include <Servo.h>

Servo servo1;                                                         //Create instances of type Servo. servo1 is the steering servo and servo2 is the ESC.
Servo servo2;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  servo1.attach(5);                                                  //Steering servo on digital pin 5
  servo2.attach(3);                                                  //ESC on sigital pin 3 (throttle)
}

void loop()
{
  servo1.write(90);
  servo2.write(90);
  delay(1000);
  servo1.write(20);
  delay(2000);
  servo1.write(160);
  delay(2000);
  servo2.write(110);
  delay(2000);
  servo2.write(70);
  delay(2000);
}
