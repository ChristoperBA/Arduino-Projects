//PR05
int boton = 7;
int Rojo = 2;
int Amarillo = 3;
int Verde = 4;
int RojoPeatonal = 5;
int VerdePeatonal = 6;
int estado=0;

void setup()
{
  pinMode (boton,INPUT);
  pinMode (Rojo, OUTPUT);
  pinMode (Amarillo, OUTPUT);
  pinMode (Verde, OUTPUT);
  pinMode (RojoPeatonal, OUTPUT);
  pinMode (VerdePeatonal, OUTPUT);
  digitalWrite(Verde, HIGH);
  digitalWrite(RojoPeatonal, HIGH);
}

void loop(){
estado = digitalRead(boton);
if (estado == HIGH){
  delay(3500);
  digitalWrite(Verde,LOW);    
  digitalWrite(Amarillo, HIGH);  
  for (int x=0; x < 4; x++) {
    digitalWrite(Amarillo, HIGH);
    delay(500);
    digitalWrite(Amarillo, LOW);
    delay(500);
  }
  delay(1000);
  
  digitalWrite(Amarillo, LOW);   
  digitalWrite(Rojo, HIGH); 
  digitalWrite(VerdePeatonal, HIGH);
  digitalWrite(RojoPeatonal, LOW);
  delay(4000);
 
  
  for (int y=0; y < 4; y++) {
    digitalWrite(VerdePeatonal, HIGH);
    delay(500);
    digitalWrite(VerdePeatonal, LOW);
    delay(500);
  }
  
  digitalWrite(RojoPeatonal, HIGH);    
  digitalWrite(Rojo, LOW);    
  digitalWrite(Verde, HIGH);
}
}
