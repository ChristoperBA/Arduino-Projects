//Modificacion #2
int boton=8 ;
int led=4;
int estado=0;
int salida =0;
int estadoanterior=0;

void setup(){
  pinMode(boton,INPUT);
  pinMode(led, OUTPUT);
  }
  void loop(){
    estado = digitalRead(boton);
    if((estado==HIGH)&& (estadoanterior==LOW)){
      salida= 1 - salida;
      delay(25);
    }
    estadoanterior=estado;
    
    if (salida==HIGH){
      digitalWrite(led,HIGH);
      }
    else{
      digitalWrite(led,LOW);
      }
    }