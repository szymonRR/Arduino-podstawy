int x=0;
float nap=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x=analogRead(A0);
nap=x*(5.0/1024.0);
Serial.print(nap);
Serial.print("\t");
Serial.println(x);
delay(200);
}
