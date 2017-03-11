/**
 * Ejercicio 4
 * 
 * Dado dos número decir cual es mayor.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
int numero_1;
int numero_2;

void setup() {
  Serial.begin(9600);
  
  numero_1 = 5;
  numero_2 = 7;
  if(numero_1 > numero_2){
    Serial.print("El número mayor es: ");
    Serial.println(numero_1);
  }else{
    Serial.print("El numero mayor es: ");
    Serial.println(numero_2);
  }
}

void loop() {

}
