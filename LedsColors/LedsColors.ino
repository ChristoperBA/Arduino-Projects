//PR4MOD1

void setup(){
for (int pines = 1; pines < 7; pines++){
pinMode (pines, OUTPUT);
}
}
int secuencia=0;
void loop(){
  while(secuencia<7){
    secuencia++;
	digitalWrite(secuencia, HIGH);
    delay (300);
    digitalWrite(secuencia, LOW);
  }

  while(secuencia>1){
    secuencia--;
	digitalWrite(secuencia, HIGH);
    delay (300);
    digitalWrite(secuencia, LOW);
  }
}
