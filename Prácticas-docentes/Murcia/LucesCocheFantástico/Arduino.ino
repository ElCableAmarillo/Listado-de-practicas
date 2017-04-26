/**
 * Ejercicio "luces del coche fantástico"
 * 
 * Enciende 7 led de manera secuencial, hacia la izquierda y luego hacia la 
 * derecha, pudiendo variar la velocidad de encendido y apagado con un
 * potenciometro. 
 * @author Alfonso Lucas Fernández Bernal
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
int inPin=A0;          // salida analógica del potenciómetro
int pinArray[] = {2, 3, 4, 5, 6, 7,10};//declaración del array de las salidas digitales que vamos a usar
int count = 0;  //puesta a 0 del contador
int timer = 0;  // puesta al máximo el temporizador, posteriormente sera el potenciometro el que la controle

void setup(){
  // declaramos todas las variables a la vez
  for (count=0;count<7;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}

void loop() {
  timer = analogRead(inPin);  // hacemos el valor de timer al del potenciómetro 
  for (count=0;count<7;count++) { //contador ascendente para recorrer el array
   digitalWrite(pinArray[count], HIGH); // encendido y apagado de los leds
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
  for (count=6;count>=0;count--) { //contador descendente para recorrer el array
   digitalWrite(pinArray[count], HIGH);// encendido y apagado de los leds
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
}
