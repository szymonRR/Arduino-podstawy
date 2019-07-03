#include <Wire.h>   
#include <LiquidCrystal_I2C.h> 

#include <LiquidCrystal.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x27

byte stopnie[8] = {                //konfigurajca znaku stopnie
  0b00100,
  0b01010,
  0b10001,
  0b01010,
  0b00100,
  0b00000,
  0b00000,
  0b00000
};

void setup()  
{
  lcd.begin(20,4);   
  lcd.backlight(); // zalaczenie podwietlenia 
  lcd.setCursor(0,0); 
  lcd.print("A");
  lcd.createChar(0,stopnie);
  lcd.setCursor(1,0);
  lcd.print((char)0);
}

void loop() 
{
   lcd.backlight(); // zalaczenie podswietlenia
   
}
