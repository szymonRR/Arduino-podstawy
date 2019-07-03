
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


#include <OneWire.h>

#include <DallasTemperature.h>

float temp=0;

float maxTemp=0;
float minTemp=100;
OneWire oneWire(2);
  DallasTemperature sensors(&oneWire);
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);




void setup() {
  // put your setup code here, to run once:
  lcd.begin(20,4);
  lcd.backlight();
  sensors.begin();
  
 

 
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  sensors.requestTemperatures();
temp=sensors.getTempCByIndex(0);

if(temp>maxTemp){
  
  maxTemp=temp;
  }
if(temp<minTemp{

  minTemp=temp;
  
  }

//lcd.clear();
    
    lcd.setCursor(0,0);
    lcd.print("Temp: ");
    lcd.print(temp);
    lcd.print((char)223);
 lcd.print("C ");

 lcd.setCursor(0,1);
    lcd.print("Temp max: ");
    lcd.print(maxTemp);
    lcd.print((char)223);
 lcd.print("C ");
 lcd.setCursor(0,2);
    lcd.print("Temp min: ");
    lcd.print(minTemp);
    lcd.print((char)223);
 lcd.print("C ");
 
 


  


}
