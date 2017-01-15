/**
 * Semáforo simple
 *
 * En esta práctica vamos a crear un semáforo simple con una frecuencia de cambio
 * de 5 segundos en verde y rojo, y 1 segundo durante su estado en ámbar.
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
int ledPinAmbar = 12;
int ledPinVerde = 11;
int delayTime = 5000;
int delayTimeAmbar = 1000;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPinRojo, OUTPUT);
  pinMode(ledPinAmbar, OUTPUT);
  pinMode(ledPinVerde, OUTPUT);
  // Inicializamos los pines a un valor BAJO
  digitalWrite(ledPinRojo, LOW);
  digitalWrite(ledPinAmbar, LOW);
  digitalWrite(ledPinVerde, LOW);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Escribimos los valores ALTO y BAJO e los pines y esperamos
  digitalWrite(ledPinRojo, LOW);
  digitalWrite(ledPinVerde, HIGH);
  delay(delayTime);
  // Escribimos los valores ALTO y BAJO e los pines y esperamos
  digitalWrite(ledPinVerde, LOW);
  digitalWrite(ledPinAmbar, HIGH);
  delay(delayTimeAmbar);
  // Escribimos los valores ALTO y BAJO e los pines y esperamos
  digitalWrite(ledPinAmbar, LOW);
  digitalWrite(ledPinRojo, HIGH);
  delay(delayTime);
}