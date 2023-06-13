#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// set LCD address, number of columns and rows
LiquidCrystal_I2C lcd(0x27, 20, 4);
// if you don't know your display address, run an I2C scanner sketch

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight!                   
}

void loop()
{
  delay(1000);
  lcd.backlight();
  for (int i = 0; i <= 3; i++)
  {
    lcd.setCursor(0,i);
    lcd.print("Hello Kirchovcheta!!");
    delay(1500);
    lcd.clear();
  }
  delay(1000);
  lcd.noBacklight();
}