/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  Serial.println("Setup done!");
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
 /* for (pos = 0; pos <= 10; pos += 1) { // goes from 0 degrees to 45 degrees
    // in steps of 1 degree
    Serial.println(pos);
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 10; pos >= 0; pos -= 1) { // goes from 45 degrees to 0 degrees
    Serial.println(pos);
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 15ms for the servo to reach the position
  }*/


  myservo.write(0);
  Serial.println(0);
  delay(2000);
  myservo.write(15);
  Serial.println(15);
  delay(2000);
  myservo.write(30);
  Serial.println(30);
  delay(2000);
  myservo.write(45);
  Serial.println(45);
  delay(2000);
  myservo.write(60);
  Serial.println(60);
  delay(2000);
  myservo.write(75);
  Serial.println(75);
  delay(2000);
  myservo.write(90);
  Serial.println(90);
  delay(2000);

  
}
