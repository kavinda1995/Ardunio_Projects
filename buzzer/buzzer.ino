/* Arduino tutorial - Buzzer / Piezo Speaker
   More info and circuit: http://www.ardumotive.com/how-to-use-a-buzzer-en.html
   Dev: Michalis Vasilakis // Date: 9/6/2015 // www.ardumotive.com */


const int buzzer = 7; //buzzer to arduino pin 7

const int C = 523.25;
const int D = 587.33;
const int E = 659.25;
const int F = 698.46;
const int G = 783.99;
const int A = 880.00;
const int B = 987.77;
const int UpC = 1046.50;


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 7 as an output

}

void loop(){

  //Song
  tone(buzzer, C); // C
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, C); // C
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, E);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, E);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, D);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, D);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, E);
  delay(1000);
  noTone(buzzer);
  delay(100);
  tone(buzzer, C);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, C);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, D);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, D);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, E);
  delay(1000);
  noTone(buzzer);
  delay(100);
  tone(buzzer, C);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, D);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, E);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, F);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, E);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, D);
  delay(500);
  noTone(buzzer);
  delay(100);
  tone(buzzer, C);
  delay(500);
  
  noTone(buzzer);
  delay(2000);

  //Play full 5th Scale
  tone(buzzer, C); // C
  delay(1000);        // ...for 1 sec
  tone(buzzer, D); // D
  delay(1000);        // ...for 1 sec
  tone(buzzer, E); // E
  delay(1000);        // ...for 1 sec
  tone(buzzer, F); // F
  delay(1000);        // ...for 1 sec
  tone(buzzer, G); // G
  delay(1000);        // ...for 1 sec
  tone(buzzer, A); // A
  delay(1000);        // ...for 1 sec
  tone(buzzer, B); // B
  delay(1000);        // ...for 1 sec
  tone(buzzer, UpC); // C#
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  
}
