int led13Pin = 13;
int led12Pin = 12;
int led11Pin = 11;
int led10Pin = 10;
int led9Pin = 9;
int led8Pin = 8;
int led7Pin = 7;
int led6Pin = 6;
int led5Pin = 5;
int led4Pin = 4;
int led3Pin = 3;
int led2Pin = 2;
int led1Pin = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1Pin,OUTPUT);
  pinMode(led2Pin,OUTPUT);
  pinMode(led3Pin,OUTPUT);
  pinMode(led4Pin,OUTPUT);
  pinMode(led5Pin,OUTPUT);
  pinMode(led6Pin,OUTPUT);
  pinMode(led7Pin,OUTPUT);
  pinMode(led8Pin,OUTPUT);
  pinMode(led9Pin,OUTPUT);
  pinMode(led10Pin,OUTPUT);
  pinMode(led11Pin,OUTPUT);
  pinMode(led12Pin,OUTPUT);
  pinMode(led13Pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//  for (int i=0; i <= 10; i++){
////    Serial.print(i);
//      String led = "led"+i;
//      digitalWrite(led, HIGH);
//      delay(50);
//  }  

  //Number 0
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led12Pin, HIGH);
  digitalWrite(led13Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led10Pin, HIGH);
  digitalWrite(led11Pin, HIGH);

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);
  

  // Number 1
  resetLights();
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  delay(2000);

  //Number 2
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led13Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led10Pin, HIGH);

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 3
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led13Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led11Pin, HIGH);
  
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 4
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led12Pin, HIGH);
  digitalWrite(led13Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led11Pin, HIGH);

  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 5
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led12Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led11Pin, HIGH);

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 6
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led12Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led10Pin, HIGH);
  digitalWrite(led11Pin, HIGH);

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 7
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led13Pin, HIGH);

  digitalWrite(led6Pin, HIGH);
  
  digitalWrite(led11Pin, HIGH);

  digitalWrite(led13Pin, HIGH);
  
  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 8
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led12Pin, HIGH);
  digitalWrite(led13Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led10Pin, HIGH);
  digitalWrite(led11Pin, HIGH);

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);

  //Number 9
  resetLights();
  digitalWrite(led7Pin, HIGH);
  digitalWrite(led8Pin, HIGH);
  digitalWrite(led9Pin, HIGH);

  digitalWrite(led12Pin, HIGH);
  digitalWrite(led13Pin, HIGH);

  digitalWrite(led4Pin, HIGH);
  digitalWrite(led5Pin, HIGH);
  digitalWrite(led6Pin, HIGH);

  digitalWrite(led11Pin, HIGH);

  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  digitalWrite(led3Pin, HIGH);
  delay(2000);
  
}

void resetLights() {
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW);
  digitalWrite(led4Pin, LOW);
  digitalWrite(led5Pin, LOW);
  digitalWrite(led6Pin, LOW);
  digitalWrite(led7Pin, LOW);
  digitalWrite(led8Pin, LOW);
  digitalWrite(led9Pin, LOW);
  digitalWrite(led10Pin, LOW);
  digitalWrite(led11Pin, LOW);
  digitalWrite(led12Pin, LOW);
  digitalWrite(led13Pin, LOW);
  delay(1000);
}

