#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>


float temperature;
float humidity;
float pressure;
float wys;
#define ALTITUDE 90.0 // Altitude in Sparta, Greece

Adafruit_BME280 bme; // I2C



void setup(void) {
Serial.begin(9600);
  while (!Serial) {
    // Attente de l'ouverture du port série pour Arduino LEONARDO
  }
  

  bool status;
    
    // default settings
    status = bme.begin(0x76);  //The I2C address of the sensor I use is 0x76
    Serial.println("Starting BME280... ");
  delay(10);
}

void loop() {
  
 delay(2000);

 getPressure();
 getHumidity();
 getTemperature();
 getWys();
 
 
 
 //Printing Temperature
 String temperatureString = String(temperature,1);
 Serial.print("Temp:"); 
 Serial.print(temperatureString);
 Serial.print((char)223);
 Serial.print("C ");
 Serial.println("\t");
 
 //Printing Humidity
 String humidityString = String(humidity,0); 
 Serial.print("Wilgotnosc: ");
 Serial.print(humidityString);
 Serial.print("%");
 Serial.println("\t");
 
 //Printing Pressure
 
 String pressureString = String(pressure,2);
 Serial.print("Cisnienie: ");
 Serial.print(pressureString);
 Serial.print(" hPa");
 Serial.println("\t");

 //Printing Wys
 
 String WysString = String(wys,2);
 Serial.print("Wys: ");
 Serial.print(WysString);
 Serial.print(" m");
 Serial.println("\t");
 
}

float getTemperature()
{
  temperature = bme.readTemperature();
}

float getHumidity()
{
  humidity = bme.readHumidity();
}

float getPressure()
{
  pressure = bme.readPressure();
  pressure = bme.seaLevelForAltitude(ALTITUDE,pressure);
  pressure = pressure/100.0F;
}
float getWys()
{
  wys = bme.readPressure();
  wys = bme.seaLevelForAltitude(ALTITUDE,wys);
  wys = bme.readAltitude(wys);
  wys = wys/100;
}
