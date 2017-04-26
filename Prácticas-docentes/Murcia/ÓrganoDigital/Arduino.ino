


/* SE TRATA DE HACER UN PROGRAMA LLAMADO ORGANO DIGITAL, LA SALIDA SE HACE A TRAVES DE LA SALIDA PIN3 CON UN ALTAVOZ
 DE OCHO OHMIOS CON UNA RESISTENCIA DE 100 EN SERIE. LAS TECLAS SERÁN LAS SIGUIENTES : TECLA A=>DO MAYOR; TECLA W=>DO SOSTENIDA
 TECLA S=> RE MAYOR;  TECLA E=>RE SOSTENIDA; TECLA D=> MI; TECLA F=> FA MAYOR; TECLA T=> FA SOSTENIDO; TECLA G=> SOL MAYOR
 TECLA Y=> SOL SOSTENIDO ; TECLA H=> LA MAYOR ; TECLA U=> LA SOSTENIDO; TECLA J=> SI MAYOR; TECLA K=> DO MAYOR_4; 
 TECLA O=> DO SOSTENIDO_4; TECLA L=> RE MAYOR_4 ; TECLA P=> RE SOSTENIDO_4; LETRA Ñ=> MI; LETRA `=> FA MAYOR_4
 */

#include "pitches.h"
#define  altavoz 3
int tecla=0;
int led =2;
void setup() {
  pinMode(altavoz,OUTPUT);pinMode(led,OUTPUT);
  Serial.begin(9600);
}



void loop() {
 if (Serial.available() > 0) {
    // ESPERA A QUE LLEGUE UNA TECLA POR EL PUERTO SERIE
    tecla = Serial.read();
    // LEE LA TECLA QUE ACABA DE LLEGAR POR EL PUERTO SERIE:
     switch (tecla){
      case'a':
       tone(altavoz,NOTE_C4 ,1000);
      digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
     case'w':
       tone(altavoz,NOTE_CS4 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       break;
      case's':
       tone(altavoz,NOTE_D4,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
        break; 
     case'e':
       tone(altavoz,NOTE_DS4 ,1000);
      digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
        break;
     case'd':
       tone(altavoz,NOTE_E4,1000);
       
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       break;
      case'f':
       tone(altavoz,NOTE_F4 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;  
     case't':
       tone(altavoz,NOTE_FS4 ,1000);
      digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
     case'g':
       tone(altavoz,NOTE_G4,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
     case'y':
       tone(altavoz,NOTE_GS4 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
     case'h':
       tone(altavoz,NOTE_A4 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
     case'u':
       tone(altavoz,NOTE_AS4 ,1000);
       
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       break;
     case'j':
       tone(altavoz,NOTE_B4 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
       case'k':
       tone(altavoz,NOTE_C5 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
       case'o':
       tone(altavoz,NOTE_CS5 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
     case'l':
       tone(altavoz,NOTE_D5,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
        break;
     case'p':
       tone(altavoz,NOTE_DS5 ,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break; 
     case'ñ':
       tone(altavoz,NOTE_E5,1000);
       digitalWrite(led,HIGH);
      delay(100); 
      digitalWrite(led,LOW);
       
       break;
      
     
     } }}     
     




