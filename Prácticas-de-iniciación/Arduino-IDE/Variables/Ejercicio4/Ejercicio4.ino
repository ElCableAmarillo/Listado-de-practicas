/**
 * Ejercicio 4
 * 
 * Calcular el valor de una circunferencia de radio 7.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
float pi;
int radio;
float resultado;

void setup() {
  Serial.begin(9600);
  
  pi = 3.1415;
  radio = 7;
  resultado = 2 * pi * radio;
  
  Serial.print("El resultado es: ");
  Serial.println(resultado);
}

void loop() {

}
