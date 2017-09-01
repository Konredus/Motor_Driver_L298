//----------------------------------------------------------------------------
//    Con este codigo vamos a poder controlar el sentido y la velocidad 
//    de 2 motores  mediante el modulo driver L298
//    Autor: Konrad Peschka 2017
//----------------------------------------------------------------------------

//incluimos la libreria ecesaria
#include <L298N.h>

//definimos en que pines del arduino conectamos cada uno de lso pines del driver
//L298N driver(ENA,IN1,IN2,IN3,IN4,ENB); 
  L298N driver( 3,  4,  5,  7,  8,  9); 

//ATENCION!!! ENA y ENAB debe ir conectados a 2 pines PWM o salidas analogicas
  
int tiempo= 2000;     //este tiempo es un delay despues de activar los motores
int velocidad = 150;  //la velocidad va de 0 a 254 

void setup()
{
  //no necesitamos inicializar nada en el SETUP
}

void loop()
{
  driver.forward(velocidad,tiempo);   //motores giran para el frente
  driver.turn_right(velocidad,tiempo);           //giro derecha
  driver.turn_left(velocidad,tiempo); //giro izquierda
  driver.backward(velocidad,tiempo);  //motores giran para atras
  driver.full_stop(tiempo);           //paramos ambos motores
}
