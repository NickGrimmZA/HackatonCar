#include <AFMotor.h> 

AF_DCMotor motor(1,MOTOR12_64KHZ);

void setup() 
{

  //Set initial speed of the motor & stop
  Serial.begin(19200);
  motor.setSpeed(250);
  motor.run(RELEASE);
  Serial.println("Setup completed...");
}

void loop() 
{
motor.run(FORWARD);       
delay(1000); 
motor.run(BACKWARD);      
delay(1000);  
motor.run(RELEASE);       
delay(1000); 
}
