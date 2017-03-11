/**
 * Ejercicio 2
 * 
 * Recorre un bucle desde 1 hasta 10 mostrando y muestra el valor cuando
 * la iteración sea un número par.
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

  // Método utilizando condiciones
  for(int i=1; i<=10; i++){
    if(i%2 == 0){
      Serial.print("El valor de la iteración PAR es: ");
      Serial.println(i);
    }
  }

  // Método recorriendo bucle de 2 en 2
  for(int i=2; i<=10; i+=2){
    Serial.print("El valor de la iteración PAR es: ");
    Serial.println(i);
  }
}

void loop() {

}
