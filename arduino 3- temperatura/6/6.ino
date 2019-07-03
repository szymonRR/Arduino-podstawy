#include <DallasTemperature.h>

#include <OneWire.h>

int x=0;
float nap=0;

OneWire oneWire(2);
  DallasTemperature sensors(&oneWire);

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(A0);
nap=x*(5.0/1024.0);

sensors.requestTemperatures();
Serial.print("Temp: ");
Serial.print(sensors.getTempCByIndex(0));
Serial.print("'C");
Serial.print("\t");
Serial.print(nap);
Serial.print("\t");
Serial.println(x);
delay(500);
}
