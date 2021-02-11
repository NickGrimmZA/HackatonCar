

#define enA 9
#define in1 6
#define in2 7



void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void loop() {
 

  Serial.println("Loop started!");

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW); 
    
  for (int pwmValue = 250 ; pwmValue <= 255; pwmValue++) {

    Serial.println(pwmValue);
    // sets the value (range from 0 to 255):

    analogWrite(enA, pwmValue);
    

    // wait for 30 milliseconds to see the dimming effect

    delay(5000);
  }

  Serial.println("Speed to zero!");
  analogWrite(enA, 0);
  Serial.println("=====PAUSE=====");
  delay(10000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
  for (int pwmValue = 255 ; pwmValue >= 250; pwmValue--) {

    // sets the value (range from 0 to 255):
    Serial.println(pwmValue);
    analogWrite(enA, pwmValue);
    delay(5000);
  }

analogWrite(enA, 0);
Serial.println("Exit");
exit(0); 
  

  
}
