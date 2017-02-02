/**
 * Luz intermitente alterna
 *
 * En esta práctica vamos a crear un intermitente alterno con 2 diodos Led
 * que cambian con una frecuencia de 1 segundo.
 *
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se
 * permite el uso comercial de la obra y de las posibles obras derivadas,
 * la distribución de las cuales se debe hacer con una licencia igual a
 * la que regula la obra original.)
 */

// Definimos las variables de tipo entero
int ledPinRojo = 13;
int ledPinVerde = 12;
int delayTime = 1000;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPinRojo, OUTPUT);
  pinMode(ledPinVerde, OUTPUT);
  // Inicializamos los pines a un valor BAJO
  digitalWrite(ledPinRojo, LOW);
  digitalWrite(ledPinVerde, LOW);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Escribimos los valores ALTO y BAJO e los pines y esperamos
  digitalWrite(ledPinRojo, HIGH);
  digitalWrite(ledPinVerde, LOW);
  // Esperar
  delay(delayTime);
  // Escribimos los valores ALTO y BAJO e los pines y esperamos
  digitalWrite(ledPinRojo, LOW);
  digitalWrite(ledPinVerde, HIGH);
  // Esperar
  delay(delayTime);
}