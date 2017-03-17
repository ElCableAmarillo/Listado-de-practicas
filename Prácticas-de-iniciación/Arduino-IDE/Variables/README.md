# Variables

Las variables primitivas que vamos a destacar en Arduino por ser las más utilizadas son las siguientes:

- [Int](https://www.arduino.cc/en/Reference/Int) para almacenar números enteros
- [Float](https://www.arduino.cc/en/Reference/Float) para almacenar números en coma flotante
- [Boolean](https://www.arduino.cc/en/Reference/Boolean) para almacenar booleanos



***



### Ejercicio 1

Sumar el valor de dos números y mostrar el resultado por pantalla.

```
/**
 * Ejercicio 1
 * 
 * Sumar el valor de dos números y mostrar el resultado por pantalla.
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
int resultado;

void setup() {
  Serial.begin(9600);
  
  numero_1 = 3;
  numero_2 = 5;
  resultado = numero_1 + numero_2;
  
  Serial.print("El resultado es: ");
  Serial.println(resultado);
}

void loop() {

}
```

[Descarga el código para Arduino](Ejercicio1/Ejercicio1.ino)


<br />
<hr>
<br />


### Ejercicio 2

Realizar la siguiente operación matemática: 2 + 3  ( 5 x 2 )

```
/**
 * Ejercicio 2
 * 
 * Realizar la siguiente operación matemática: 2 + 3  ( 5 x 2 )
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
int resultado;

void setup() {
  Serial.begin(9600);
  
  numero_1 = 2;
  numero_2 = 3;
  numero_3 = 5;
  numero_4 = 2;
  resultado = numero_1 + numero_2 * (numero_3 * numero_4);
  
  Serial.print("El resultado es: ");
  Serial.println(resultado);
}

void loop() {

}
```

[Descarga el código para Arduino](Ejercicio2/Ejercicio2.ino)


<br />
<hr>
<br />


### Ejercicio 3

Multiplicar el valor de PI por 5.

```
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
```

[Descarga el código para Arduino](Ejercicio3/Ejercicio3.ino)


<br />
<hr>
<br />


### Ejercicio 4

Calcular el valor de una circunferencia de radio 7.

```
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
```

[Descarga el código para Arduino](Ejercicio4/Ejercicio4.ino)


<br />
<hr>
<br />


### Ejercicio 5

Elegir un valor aleatorio entre 0 y 255.

```
/**
 * Ejercicio 5
 * 
 * Elegir un valor aleatorio entre 0 y 255.
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
  
  randomSeed(analogRead(0));
  resultado = random(0, 256);
  
  Serial.print("El resultado es: ");
  Serial.println(resultado);
}

void loop() {

}
```

[Descarga el código para Arduino](Ejercicio5/Ejercicio5.ino)



***



#### Licencia

<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /> Esta obra se distribuye bajo licencia [Reconocimiento-CompartirIgual 4.0 Internacional (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).
