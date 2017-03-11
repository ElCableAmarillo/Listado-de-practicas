/**
 * Ejercicio 1
 * 
 * Recorre un bucle desde 1 hasta 10 mostrando el número de iteración en línas
 * separadas.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos


void setup() {
  Serial.begin(9600);
  
  for(int i=1; i<=10; i++){
    Serial.print("El valor de la iteración es: ");
    Serial.println(i);
  }
}

void loop() {

}
