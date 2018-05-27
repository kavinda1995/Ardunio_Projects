int sensorValue = 0;
int sensorMin = 1023;        // minimum sensor value
int sensorMax = 0;           // maximum sensor value

//Constants:
const int ledPin = 3;   //pin 3 has PWM funtion
const int flexPin = A0; //pin A0 to read analog input

//Variables:
int value; //save analog value


void setup(){
  
  pinMode(ledPin, OUTPUT);  //Set pin 3 as 'output'
  Serial.begin(9600);       //Begin serial communication

  // calibrate during the first five seconds
  digitalWrite(ledPin, HIGH);

   // calibrate during the first five seconds 
  while (millis() < 5000) {
   sensorValue = analogRead(flexPin);

   // record the maximum sensor value
   if (sensorValue > sensorMax) {
     sensorMax = sensorValue;
   }

   // record the minimum sensor value
   if (sensorValue < sensorMin) {
     sensorMin = sensorValue;
   }
 }
 // signal the end of the calibration period
   digitalWrite(ledPin, LOW);
 Serial.print("Sensor Min : ");
 Serial.print(sensorMin);
 Serial.println(", Sensor Max : ");
 Serial.print(sensorMax);
 Serial.println("---------------------------------------------------------------------");
 delay(5000);

}

void loop(){
  
  sensorValue = analogRead(flexPin);         //Read and save analog value from potentiometer
  Serial.println(sensorValue);               //Print value
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);//Map value 0-1023 to 0-255 (PWM). Check your min and max values of flex sensor and set them to 700, 900 respectively
  analogWrite(ledPin, sensorValue);          //Send PWM value to led
  delay(100);                          //Small delay
  
}


