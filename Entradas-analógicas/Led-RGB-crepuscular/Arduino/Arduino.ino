/**
 * Led RGB crepuscular
 *
 * En esta práctica vamos a visualizar los colores rojos, verde y azul a
 * medida que disminuye o aumenta la cantidad de luz en el sensor LDR.
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
int ldrPin = 0;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ldrPin, INPUT);
  // Inicializamos los pines a un valor BAJO
  analogWrite(ledPinR, 0);
  analogWrite(ledPinG, 0);
  analogWrite(ledPinB, 0);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  if (analogRead(ldrPin) < 300) {
    analogWrite(ledPinR, 0);
    analogWrite(ledPinG, 255);
    analogWrite(ledPinB, 255);
  } else if (analogRead(ldrPin) < 600) {
    analogWrite(ledPinR, 255);
    analogWrite(ledPinG, 0);
    analogWrite(ledPinB, 255);
  } else {
    analogWrite(ledPinR, 255);
    analogWrite(ledPinG, 255);
    analogWrite(ledPinB, 0);
  }
}
