/**
 * Ejercicio 3
 * 
 * Muestra los números desde el 1 hasta el 10 en orden ascendente y luego
 * en descendente.
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

  Serial.print("Orden ascendente: ");
  for(int i=1; i<=10; i++){
    Serial.print(i);
  }
  Serial.println();

  Serial.print("Orden descendente: ");
  for(int i=10; i>=1; i--){
    Serial.print(i);
  }
  Serial.println();
}

void loop() {

}
