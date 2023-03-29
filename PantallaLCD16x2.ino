#include <LiquidCrystal.h>

LiquidCrystal lcd(22, 23, 5, 18, 19, 21);  //Pines del LCD - ESP32
//LiquidCrystal lcd(7, 6, 5, 4, 3, 2);  //Pines del LCD - Arduino

void setup() {
  lcd.begin(16,2);      //Tallaño de LCD 16 col, 2 lin.
}

void loop() {
  //Pantalla LCD
  lcd.setCursor(0,0);         //Primera fila
  lcd.print("¡Hola!");
  lcd.setCursor(0,2);         //Segunda fila
  lcd.print("Suscribete");
}
