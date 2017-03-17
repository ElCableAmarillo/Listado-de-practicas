/**
 * Ejercicio 5
 * 
 * Recorre una matriz de 3 x 3 representando el valor de sus posiciones 
 * en coordenadas.
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
  
  for(int i=1; i<=3; i++){
    for(int j=1; j<=3; j++){
      Serial.print(i);Serial.print(",");Serial.print(j);Serial.print(" ");
    }
    Serial.println();
  }
}

void loop() {

}
