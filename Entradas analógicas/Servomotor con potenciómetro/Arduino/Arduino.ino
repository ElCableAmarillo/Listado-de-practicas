/**
 * Servomotor con potenciómetro
 * 
 * En esta práctica vamos a mover un servomotor utilizando un potenciómetro.
 * A medida que vamos moviendo el valor del mismo el valor del servo irá
 * cambiando.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Importamos la librería del servomotor
#include <Servo.h>

// Definimos la variable de tipo servo
Servo servomotor;

// Se definen las variables de tipo entero
int pinPotenciometro = 0;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  servomotor.attach(9);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  int angulo = analogRead(pinPotenciometro);
  angulo = map(angulo, 0, 1023, 0, 180);
  servomotor.write(angulo);
  delay(15);
}
