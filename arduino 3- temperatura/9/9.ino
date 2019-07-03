#include <DallasTemperature.h>

#include <OneWire.h>

int x=0;
float nap=0;
float temperatura=0;

OneWire oneWire(2);
  DallasTemperature sensors(&oneWire);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN,LOW);
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(A0);
nap=x*(5.0/1024.0);

sensors.requestTemperatures();
temperatura=sensors.getTempCByIndex(0);
Serial.print("Temp: ");
Serial.print(sensors.getTempCByIndex(0));
Serial.print("'C");
Serial.print("\t");
Serial.print(nap);
Serial.print("V");
Serial.print("\t");
Serial.print(x);
Serial.println("Bi");
if((nap>2.5)||(temperatura>27)){digitalWrite(LED_BUILTIN,HIGH);}else{digitalWrite(LED_BUILTIN,LOW);}
//if(temperatura>27){digitalWrite(LED_BUILTIN,HIGH);}else{digitalWrite(LED_BUILTIN,LOW);}

}
