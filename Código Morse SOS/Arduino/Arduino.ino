/**
 * Código Morse SOS
 *
 * En esta práctica te proponemos que programes el código fuente para
 * reproducir el sonido de SOS del Código Morse utilizando un zumbador.
 *
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se
 * permite el uso comercial de la obra y de las posibles obras derivadas,
 * la distribución de las cuales se debe hacer con una licencia igual a
 * la que regula la obra original.)
 */

// Definimos las variables de tipo entero
int zumPin = 13;
int delayTime = 3000;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos el pin en modo salida
  pinMode(zumPin, OUTPUT);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Llamamos a la función pulsoCorto pasándole por parámetro el tiempo
  for(int i=0; i<3; i++){
    pulso(100);
  }
  // Llamamos a la función pulsoCorto pasándole por parámetro el tiempo
  for(int i=0; i<3; i++){
    pulso(500);
  }
  // Llamamos a la función pulsoCorto pasándole por parámetro el tiempo
  for(int i=0; i<3; i++){
    pulso(100);
  }
  // Tiempo de espera para nuevo mensaje SOS
  delay(delayTime);
}

// Función pulso donde le pasamos parámetro el tiempo de espera
void pulso(int tiempo) {
    digitalWrite(zumPin, HIGH);
    delay(tiempo);
    digitalWrite(zumPin, LOW);
    delay(tiempo);
}
