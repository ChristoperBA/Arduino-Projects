//PR2MOD1
int LED1=3;
int LED2=5;
int LED3=6;
int REGULAR;
int POT=A0;
void setup(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  }
void loop(){
  REGULAR =analogRead(POT)/4;
  analogWrite(LED1,REGULAR);
  analogWrite(LED2,REGULAR);
  analogWrite(LED3,REGULAR);
  }
