int procent =0;
int koniec=0;
int i=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,procent);
if((procent<255)&&(koniec==0)){
    procent=procent+i;
    
    }
  if(procent==255){koniec=1;}
  if((procent>0)&&(koniec==1)){
    procent = procent-i;}
    
    if(procent==0){koniec=2;}
    if(koniec==2){

       analogWrite(3,0);

delay(2000);
analogWrite(3,127);
delay(2000);
analogWrite(3,255);
    
   
      delay(2000);

       analogWrite(3,255);

delay(2000);
analogWrite(3,127);
delay(2000);
analogWrite(3,0);
    
   
      delay(2000);
      koniec=0;
      
      }
   
      delay(55);
}
