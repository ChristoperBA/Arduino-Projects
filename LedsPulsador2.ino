//PR3MOD1
int boton = 2;
int Pro1 = 3;
int Pro2 = 4;
int Pro3 = 5;
int Emergencia = 6;
int estado = LOW;
int t = 500;

void setup() {
  pinMode (boton,INPUT);
  pinMode (Pro1, OUTPUT);
  pinMode (Pro2, OUTPUT);
  pinMode (Pro3, OUTPUT);
  pinMode (Emergencia, OUTPUT);
  attachInterrupt (digitalPinToInterrupt(boton), detener, RISING);
}
void detener()
{
  estado = !estado;
  digitalWrite(Emergencia, estado);
}
void loop() {
  if(estado==LOW){
  digitalWrite(Pro1, HIGH);
  delay(t);
  digitalWrite(Pro1, LOW);
  delay(t);
  digitalWrite(Pro2, HIGH);
  delay(t);
  digitalWrite(Pro2, LOW);
  delay(t);
  digitalWrite(Pro3, HIGH);
  delay(t);
  digitalWrite(Pro3, LOW);
  delay(t);
  }
  if(Emergencia==HIGH){
     digitalWrite(Pro1, LOW);
     digitalWrite(Pro2, LOW);
     digitalWrite(Pro3, LOW);
  }
}