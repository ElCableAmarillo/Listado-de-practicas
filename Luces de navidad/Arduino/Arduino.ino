/**
 * Luces de navidad
 * 
 * En esta práctica vamos a tratar de encender de forma aleatoria
 * 3 Diodos Led de color blanco utilizando las salidas analógicas
 * y con valores aleatorios.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Definimos las variables de tipo entero
int ledPin1 = 9;
int ledPin2 = 6;
int ledPin3 = 5;
int delayTime = 500;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos los pines en modo salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  // Inicializamos los pines a un valor BAJO
  analogWrite(ledPin1, 0);
  analogWrite(ledPin2, 0);
  analogWrite(ledPin3, 0);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Escribimos el valor aleatorio en cada pin
  analogWrite(ledPin1, random(0, 255));
  analogWrite(ledPin2, random(0, 255));
  analogWrite(ledPin3, random(0, 255));
  // Esperamos
  delay(delayTime);

}
