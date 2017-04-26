#include <Servo.h>
Servo myservo;
#include <Wire.h>

#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>


int a=0;
#define I2C_ADDR    0x27

LiquidCrystal_I2C             lcd(I2C_ADDR,2, 1, 0, 4, 5, 6, 7);
                                              //Definir variables
const int Tamb =0 ;                          //  Entrada sensor de temperatura
 int Tmin = 24;                               //  Referencia inicial Temperatura mínima  Tmin
 int Tmax = 26;                               //  Referencia inicial Temperatura máxima  Tmax
int subTmax=0;
int bajTmax=0;
int subTmin=0;
int bajTmin=0;
void setup()
   {
       lcd.begin (16,2);    // Inicializar el display con 16 caraceres 2 lineas
       lcd.setBacklightPin(3,POSITIVE);
       lcd.setBacklight(HIGH);

myservo.attach(5);                       // salida servomotor
                       
  pinMode(6, OUTPUT);                 // salida relé calefación
  pinMode(7, OUTPUT);                 //  salida relé aire acondicionado
  pinMode(8, OUTPUT);                 // Led rojo
  pinMode(9, OUTPUT);                 // led amarillo
  pinMode(10, OUTPUT);               // led verde
   pinMode(13, INPUT);                // Pulsador subir Temperatura máxima
  pinMode(12, INPUT);                 // Pulsador bajar Temperatura máxima
  pinMode(11, INPUT);                // Pulsador subir Temperatura mínima
  pinMode(3, INPUT);                 // Pulsador bajar Temperatura mínima
  Serial.begin(9600);                 //  inicializa puerto de comunicaciones
}


       
   
void loop() 
   {
    
     subTmax = digitalRead(13); 
if (subTmax == HIGH) {
        Tmax =Tmax+1;    
}


            bajTmax = digitalRead(12); 
if (bajTmax == HIGH) {
        Tmax =Tmax-1;    
}

subTmin = digitalRead(11); 
if (subTmin == HIGH) {
        Tmin =Tmin+1;    
}


            bajTmin = digitalRead(3); 
if (bajTmin == HIGH) {
        Tmin =Tmin-1;    
}



    
    int Tamb = analogRead(A0)/2;          // lee la temperatura por la entrada analogica A0    Tamb=Temperatura ambiente


if (Tamb < Tmin ) {                  // poner calefacion
    
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    myservo.write(0);
    

lcd.home ();                            // pone el cursor del LCD en primera fila , primera columna
        lcd.clear() ;                   // borra pantalla LCD
       lcd.print("mi=" );
       lcd.print (Tmin);
       lcd.print("amb=" );
       lcd.print (Tamb);
       lcd.print("Ma=" );
       lcd.print (Tmax);
       lcd.setCursor ( 0, 1 );          //  pasa a la segunda linea del LCD
       lcd.print("calefacion marcha");
       } 

  
  

if (Tamb < Tmax &&    Tamb>Tmin ) {         // zona de confor

    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
      myservo.write(0);

    lcd.home ();      // go home
     lcd.clear() ;   
       lcd.print("mi=" );
       lcd.print (Tmin);
       lcd.print("amb=" );
       lcd.print (Tamb);
       lcd.print("Ma=" );
       lcd.print (Tmax);
       lcd.setCursor ( 0, 1 );        
       lcd.print("zona confor");
    } 


if (Tamb > Tmax) {                      // poner aire acondicionado

    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
   myservo.write(180);                  // abre ventilación

  
     lcd.home ();      
      lcd.clear() ;
       lcd.print("mi=" );
       lcd.print (Tmin);
       lcd.print("amb=" );
       lcd.print (Tamb);
       lcd.print("Ma=" );
       lcd.print (Tmax);
       lcd.setCursor ( 0, 1 );        
       lcd.print("aire acondicionado");
  
  }



  
  Serial.print("T min = ");            //Imprime en el puerto serie los valores de temperatura   (Tmin    Tamb    Tmax)
  Serial.print(Tmin  );

Serial.print("      T amb = ");
  Serial.print(Tamb  );
  
Serial.print("     T max = ");
  Serial.println(Tmax );
  
  
  delay(1000);                        // retraso para que no exixtan rebotes
}

    
    
    
    
    















    







