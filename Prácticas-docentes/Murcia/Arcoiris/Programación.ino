//Declaracion de los pines:
int LEDr=11; //Color rojo pin 11
int LEDg=10; //Color azul pin 10
int LEDb=9; //Color verde pin 9
//Declaración de las variables:
int rojo=0;
int verde=0;
int azul=0;

void setup() {
  //Inicialización del LED
  //Comprobacion de cada color por separado
  setColor(255,0,0);
  delay(500);
  setColor(0,255,0);
  delay(500);
  setColor(0,0,255);
  delay(500);
  //Comprobacion todos los colores
  setColor(255,255,255);
  delay(500);
  setColor(0,0,0);
  delay(1000);
  setColor(255,255,255);
  delay(500);
  //Dejamos el color rojo para empezar el loop
  setColor(255,0,0);
  delay(100);
  }

void loop() {  
  //Se mantiene el rojo al maximo mientras sube el verde
  for (int verde=0;verde<=255;verde++){
    setColor(255,verde,0);
    delay(20);
    }  
  //Se mantiene el verde al maximo mientras baja el rojo 
  for (int rojo=255;rojo>=0;rojo--){
    setColor(rojo,255,0);
    delay(20);
    }
  //Se mantiene el verde al maximo mientras sube el azul 
  for (int azul=0;azul<=255;azul++){
    setColor(0,255,azul);
    delay(20);
    }
  //Se mantiene el azul al maximo mientras baja el verde
  for (int verde=255;verde>=0;verde--){
    setColor(0,verde,255);
    delay(20);
    }
  //Se mantiene el azul al maximo mientras sube el rojo
  for (int rojo=0;rojo<=255;rojo++){
    setColor(rojo,0,255);
    delay(20);
    }
  //Se mantiene el rojo al maximo mientras baja el azul
  for (int azul=255;azul>=0;azul--){
    setColor(255,0,azul);
    if(azul==0){
      delay(100);
      }
    else{  
      delay(20);
      }
    }
  }

void setColor(int rojo,int verde,int azul)
{
  analogWrite(LEDr,rojo);
  analogWrite(LEDg,verde);
  analogWrite(LEDb,azul);  
}
