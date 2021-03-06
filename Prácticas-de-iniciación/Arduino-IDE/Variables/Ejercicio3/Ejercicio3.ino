/**
 * Ejercicio 3
 * 
 * Multiplicar el valor de PI por 5.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
float numero_1;
int numero_2;
float resultado;

void setup() {
  Serial.begin(9600);
  
  numero_1 = 3.1415;
  numero_2 = 5;
  resultado = numero_1 * numero_2;

  Serial.print("El resultado es: ");
  Serial.println(resultado);
}

void loop() {

}
