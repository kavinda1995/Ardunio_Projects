#include <Servo.h>
Servo servol;
const int flexpin = 0;


void setup() {
  Serial.begin(9600);
  servol.attach(9);
}

void loop()
{
 int flexposition;
 int servoposition;
 flexposition = analogRead(flexpin);
 servoposition = map(flexposition,0,1023,0,90);
 servoposition = constrain(servoposition,0,90);
 servol.write(servoposition);
 Serial.print("sensor");
 Serial.print(flexposition);
 Serial.print(" servo ");
 Serial.println(servoposition);
 delay(1000);

}
