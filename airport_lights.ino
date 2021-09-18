//const int buzzer = 13;
//const int buzzer2 = 12;
#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Curso Arduino ");
  lcd.setCursor(0, 1);
  lcd.print("no IEFP.");
  //lcd.cursor();
  
  //pinMode(buzzer, OUTPUT);
  //pinMode(buzzer2, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
  pinMode(7, INPUT_PULLUP);

  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

double leitura;

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7)==LOW) 
  //Se for HIGH, 
  //a led pisca como luzes de Natal. 
  //Ver página 65 para usar o pino.
  {
  
  delay(1000);
  digitalWrite(11, HIGH);  
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);  
  while(digitalRead(7)==LOW){} //press for < 1000.
  digitalWrite(11, LOW);  
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

}

  //pinMode(buzzer, OUTPUT);
  //pinMode(buzzer2, OUTPUT);

  //tone(buzzer, 1000); // Send 1KHz sound signal...
  //delay(1000);        // ...for 1 sec
  //noTone(buzzer);     // Stop sound...
  //delay(1000);        // ...for 1sec

  //tone(buzzer2, 1000); // Send 1KHz sound signal...
  //delay(1000);        // ...for 1 sec
  //noTone(buzzer2);     // Stop sound...
  //delay(1000);        // ...for 1sec
  

else {


  //tone(buzzer, 1000); // Send 1KHz sound signal...
  //delay(1000);        // ...for 1 sec
  //noTone(buzzer);     // Stop sound...
  //delay(1000);        // ...for 1sec

  //tone(buzzer2, 1000); // Send 1KHz sound signal...
  //delay(1000);        // ...for 1 sec
  //noTone(buzzer2);     // Stop sound...
  //delay(1000);        // ...for 1sec
  
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(11, HIGH);    
  delay(1000);
  while (digitalRead(7)==LOW) {}  
  digitalWrite(8, HIGH);
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(9, HIGH);
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(10, HIGH);
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(10, LOW);
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(9, LOW);
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(8, LOW);
  delay(1000);
  while (digitalRead(7)==LOW) {}
  digitalWrite(11, LOW);
}
}
