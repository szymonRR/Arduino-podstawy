int procent =0;
int i=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,procent);

  if(procent<255){
    procent = procent + i;
    
    }
    else{
      procent=0;
      }
      delay(55);
}
