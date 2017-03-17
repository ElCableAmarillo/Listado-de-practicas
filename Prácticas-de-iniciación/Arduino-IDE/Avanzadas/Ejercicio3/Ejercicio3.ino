/**
 * Ejercicio 3
 * 
 * 0 1 2 3 4 5 
 * 1 2 3 4 5 6 
 * 2 3 4 5 6 7 
 * 3 4 5 6 7 8 
 * 4 5 6 7 8 9 
 * 5 6 7 8 9 10 
 * 
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
int resultado;

void setup() {
  Serial.begin(9600);

  resultado = 0;
  for(int i=0; i<=5; i++){
    for(int j=0; j<=5; j++){
      resultado = i+j;
      Serial.print(resultado); Serial.print(" ");
    }
    Serial.println();
  }
}

void loop() {

}
