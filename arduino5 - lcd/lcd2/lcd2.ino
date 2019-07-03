#include <Wire.h>   
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x27

void setup()  
{
  lcd.begin(20,4);   
  lcd.backlight(); // zalaczenie podwietlenia 
  lcd.setCursor(0,0); 
  lcd.print("AAAA");
  delay(500);
  lcd.setCursor(5,0); 
  lcd.print("BBBB");
  lcd.setCursor(10,0); 
  lcd.print("CCCC");
  delay(500);
  lcd.setCursor(15,0); 
  lcd.print("DDDD");
}

void loop() 
{
   lcd.backlight(); // zalaczenie podswietlenia
   delay(5000);
   lcd.noBacklight(); // wylaczenie podswietlenia
   delay(5000);
}
