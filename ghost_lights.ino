#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){ 
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Curso Arduino ");
  lcd.setCursor(0, 1);
  lcd.print("no IEFP.");

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

void loop(){
  if (digitalRead(7)==HIGH){

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

  else{

    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(11, HIGH);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(8, HIGH);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(9, HIGH);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(10, HIGH);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(10, LOW);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(9, LOW);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(8, LOW);
    delay(1000);
    while(digitalRead(7)==LOW){}
    digitalWrite(11, LOW);

  }
}
