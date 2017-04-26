
/*Ruleta de la fortuna.
 Versión modificada del proyecto del grupo Sabika de 5 leds.
 Trabajo desarrollado por José Valverde Gea y Pedro Manuel Saura 
 Se trata de doce leds que se van encendiendo y apagando formando una secuencia, 
 el jugador debe dar al pulsador cuando los ledes verdes se enciende, 
 si acierta funciona un zumbador y la velocidad de la secuencia aumenta.
 Los ledes deben estar conectados de los pines 2, 3, 4, 5, 6, 7, 8, 9, 10, 14 (A0), 15(A1), 16(A2), el zumbador al pin 12 y el pulsador al pin 11.
 El tiempo inicial entre encendido y apagado de leds debe ser 150 ms,
 si se acierta se decrementa el tiempo en 20 ms, si el tiempo entre encendidos llegase a 10 ms, se devuelve el tiempo a 150 ms.
 */

int leds[]={2,3,4,5,6,7,8,9,10,14,15,16};
int n=0;
int tiempo=150;
int zumbador=12;
int pulsador=11;

void setup(){
  for(n=0;n<12;n++){
    pinMode(leds[n],OUTPUT);
  }
  pinMode(zumbador,OUTPUT);
  pinMode(pulsador,INPUT);
}

void compruebaacierto(){
  if(digitalRead(pulsador)==HIGH && n==3){
    digitalWrite(zumbador,HIGH);
    delay(1000);
    digitalWrite(zumbador,LOW);
    tiempo=tiempo-20;
    if(tiempo<10){
      tiempo=150;}
  }
    else if(digitalRead(pulsador)==HIGH && n==7){
      digitalWrite(zumbador,HIGH);
    delay(1000);
    digitalWrite(zumbador,LOW);
    tiempo=tiempo-20;
    if(tiempo<10){
      tiempo=150;}
    }
  
  else if(digitalRead(pulsador)==HIGH && n==11){
      digitalWrite(zumbador,HIGH);
    delay(1000);
    digitalWrite(zumbador,LOW);
    tiempo=tiempo-20;
    if(tiempo<10){
      tiempo=150;}
    }  
  }
void loop(){
  for(n=0; n<12; n++){
    digitalWrite(leds[n],HIGH);
    delay(tiempo);
    compruebaacierto();
    digitalWrite(leds[n],LOW);
    delay(tiempo);
  }
}
