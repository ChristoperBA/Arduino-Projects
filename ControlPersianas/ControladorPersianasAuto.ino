//Proyecto
//Instalacion de las Librerias necesarias
#include <Keypad.h>
#include <Adafruit_NeoPixel.h>
#include <Servo.h>
#define PIN 12	 
#define NUMPIXELS 2 

//Varibles en teclado 4x4
const byte ROWS =4;
const byte COLUMNS =4;
char keys[ROWS][COLUMNS]=
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
//Se inicializan los pines de las filas y columnas
byte rowsPins [ROWS] = {11,10,9,8};
byte columnsPins [COLUMNS]{7,6,5,4};

//Funcion para utilizar el teclado 
Keypad teclado=Keypad(makeKeymap(keys), rowsPins, columnsPins, ROWS,COLUMNS);
char key;


//Inicializa la fotoresistencia
int ft=1;
int valorft=0;
int clear=1;

//Servomotor
Servo servo_9;

//Para definir pines y Cantidad de neopixeles
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(ft,INPUT);
  Serial.begin(9600);
 //Inicializa la libreria
  pixels.begin();
  //Servomotor
  servo_9.attach(2, 500, 2500);
  
}

void loop()
{
  key=teclado.getKey();
  valorft=analogRead(ft);
  Serial.println(key);
  if(key=='C'){clear=1 - clear;}
  if(clear==1){
    if(valorft>=300)
      {
        AbrePersiana();
      }
    else
       { 
         CierrePersiana();
       }
  }
  if (key=='B') 
    {
      AbrePersiana();
    }
  else if(key=='A')
	{
      CierrePersiana();
    } 
}

void CierrePersiana(){
  	//Se cierran las Persianas
 	pixels.setPixelColor (0, pixels.Color (0,150,0));
  	pixels.setPixelColor (1, pixels.Color (0,150,0));
	pixels.show () ;
    servo_9.write(0);
  
}
void AbrePersiana(){
  	//Se abren las persianas
  	pixels.setPixelColor (0, pixels.Color (0,0,0));
  	pixels.setPixelColor (1, pixels.Color (0,0,0));
	pixels.show () ;
    servo_9.write(180);
}
