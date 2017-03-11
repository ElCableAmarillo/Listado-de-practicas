/**
 * Ejercicio 5
 * 
 * Dado 5 números decir cual es mayor de todos.
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
int numero_3;
int numero_4;
int numero_5;
int resultado;

void setup() {
  Serial.begin(9600);
  
  numero_1 = 5;
  numero_2 = 7;
  numero_3 = 6;
  numero_4 = 1;
  numero_5 = 4;
  resultado = 0;
  
  if(numero_1 > resultado){
    resultado = numero_1;
  }
  if(numero_2 > resultado){
    resultado = numero_2;
  }
  if(numero_3 > resultado){
    resultado = numero_3;
  }
  if(numero_4 > resultado){
    resultado = numero_4;
  }
  if(numero_5 > resultado){
    resultado = numero_5;
  }

  Serial.print("El numero mayor es: ");
  Serial.println(resultado);
}

void loop() {

}
