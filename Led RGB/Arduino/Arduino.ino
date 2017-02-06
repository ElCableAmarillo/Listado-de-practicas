/**
 * Led RGB
 * 
 * Un led RGB permite visualizar una luz de diferentes colores en 
 * función de la alimentación de cada una de sus patillas. En esta 
 * práctica vamos a visualizar los colores rojos, verde y azul 
 * alimentando para cada color una sola parte gracias al uso de 
 * pines PWM de la placa de Arduino.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Definimos las variables de tipo entero
int ledPinR = 9;
int ledPinG = 6;
int ledPinB = 5;
int delayTime = 1000;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  // Inicializamos los pines a un valor BAJO
  analogWrite(ledPinR, 255);
  analogWrite(ledPinG, 255);
  analogWrite(ledPinB, 255);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Escribimos el valor 0 para encender el rojo
  analogWrite(ledPinR, 0);
  analogWrite(ledPinG, 255);
  analogWrite(ledPinB, 255);
  // Esperamos
  delay(delayTime);
  // Escribimos el valor 0 para encender el verde
  analogWrite(ledPinR, 255);
  analogWrite(ledPinG, 0);
  analogWrite(ledPinB, 255);
  // Esperamos
  delay(delayTime);
  // Escribimos el valor 0 para encender el azul
  analogWrite(ledPinR, 255);
  analogWrite(ledPinG, 255);
  analogWrite(ledPinB, 0);
  // Esperamos
  delay(delayTime);
}
