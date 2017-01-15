/**
 * Luz intermitente
 * 
 * En esta primera práctica vamos a realizar un sencillo proyecto 
 * consistente en un LED que parpadea continuamente con una frecuencia 
 * de 1 segundo.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Definimos las variables de tipo entero
int ledPin = 13;
int delayTime = 1000;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos el pin en modo salida
  pinMode(ledPin, OUTPUT);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Escribimos en el pin el valor ALTO y esperamos
  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  // Escribimos en el pin el valor BAJO y esperamos 
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
