int led1Pin = 13;
int led2Pin = 12;
int led3Pin = 11;
int led4Pin = 10;
int led5Pin = 9;
int led6Pin = 8;
int led7Pin = 7;
int led8Pin = 6;
int led9Pin = 5;
int led10Pin = 4;

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
}

void loop() {
  // put your main code here, to run repeatedly:

//  for (int i=0; i <= 10; i++){
////    Serial.print(i);
//      String led = "led"+i;
//      digitalWrite(led, HIGH);
//      delay(50);
//  }  

  //Stream Up
  digitalWrite(led1Pin, HIGH);
  delay(50);
  digitalWrite(led1Pin, LOW);
  delay(50);
  digitalWrite(led2Pin, HIGH);
  delay(50);
  digitalWrite(led2Pin, LOW);
  delay(50);
  digitalWrite(led3Pin, HIGH);
  delay(50);
  digitalWrite(led3Pin, LOW);
  delay(50);
  digitalWrite(led4Pin, HIGH);
  delay(50);
  digitalWrite(led4Pin, LOW);
  delay(50);
  digitalWrite(led5Pin, HIGH);
  delay(50);
  digitalWrite(led5Pin, LOW);
  delay(50);
  digitalWrite(led6Pin, HIGH);
  delay(50);
  digitalWrite(led6Pin, LOW);
  delay(50);
  digitalWrite(led7Pin, HIGH);
  delay(50);
  digitalWrite(led7Pin, LOW);
  delay(50);
  digitalWrite(led8Pin, HIGH);
  delay(50);
  digitalWrite(led8Pin, LOW);
  delay(50);
  digitalWrite(led9Pin, HIGH);
  delay(50);
  digitalWrite(led9Pin, LOW);
  delay(50);
  digitalWrite(led10Pin, HIGH);
  delay(50);
  digitalWrite(led10Pin, LOW);
  delay(50);

  //Stream Down
  digitalWrite(led9Pin, HIGH);
  delay(50);
  digitalWrite(led9Pin, LOW);
  delay(50);
  digitalWrite(led8Pin, HIGH);
  delay(50);
  digitalWrite(led8Pin, LOW);
  delay(50);
  digitalWrite(led7Pin, HIGH);
  delay(50);
  digitalWrite(led7Pin, LOW);
  delay(50);
  digitalWrite(led6Pin, HIGH);
  delay(50);
  digitalWrite(led6Pin, LOW);
  delay(50);
  digitalWrite(led5Pin, HIGH);
  delay(50);
  digitalWrite(led5Pin, LOW);
  delay(50);
  digitalWrite(led4Pin, HIGH);
  delay(50);
  digitalWrite(led4Pin, LOW);
  delay(50);
  digitalWrite(led3Pin, HIGH);
  delay(50);
  digitalWrite(led3Pin, LOW);
  delay(50);
  digitalWrite(led2Pin, HIGH);
  delay(50);
  digitalWrite(led2Pin, LOW);
  delay(50);
  digitalWrite(led1Pin, HIGH);
  delay(50);
  digitalWrite(led1Pin, LOW);
  delay(50);
}
