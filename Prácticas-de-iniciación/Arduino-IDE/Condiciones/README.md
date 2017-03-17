# Condiciones

Las condiciones son sentencias que comprueban el resultado VERDADERO o FALSO de la condición.

```
if(condición){
    // Si la condición es verdadera
    Instrucción 1
    Instrucción 2
    ...
    Instrucción N
}else{
    // En caso contrario
    Instrucción 1
    Instrucción 2
    ...
    Instrucción N
}
```

- **a == b**     a y b son iguales
- **a > b**      a es mayor que b
- **a < b**      a es menor que b
- **a >= b**     a es mayor o igual que b
- **a <= b**     a es menor o igual que b



***



### Ejercicio 1

Mostrar un mensaje por pantalla diciendo si un número aleatorio es mayor o menor que 100.

```
/**
 * Ejercicio 1
 * 
 * Mostrar un mensaje por pantalla diciendo si un número aleatorio es 
 * mayor o menor que 100.
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
  
  if(resultado > 100) {
      Serial.print("El número es MAYOR que 100");
  } else {
      Serial.print("El número es MENOR que 100");
  }
}

void loop() {

}
```

[Descarga el código para Arduino](Ejercicio1/Ejercicio1.ino)


<br />
<hr>
<br />


### Ejercicio 2

Mostrar un mensaje por pantalla diciendo su un número aleatorio es positivo o negativo.

```
/**
 * Ejercicio 2
 * 
 * Mostrar un mensaje por pantalla diciendo su un número aleatorio es positivo 
 * o negativo.
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
  resultado = random(-10, 10);
  
  Serial.print("El resultado es: ");
  Serial.println(resultado); 
   
  if(resultado >= 0) {
    Serial.print("El número es POSITIVO");
  } else {
    Serial.print("El número es NEGATIVO");
  }
}

void loop() {

}
```

[Descarga el código para Arduino](Ejercicio2/Ejercicio2.ino)


<br />
<hr>
<br />


### Ejercicio 3

Mostrar un mensaje diciendo si un número aleatorio es par o impar.

```
/**
 * Ejercicio 3
 * 
 * Mostrar un mensaje diciendo si un número aleatorio es par o impar.
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
   
  if(resultado%2 == 0){
    Serial.print("El número es PAR");
  }else{
    Serial.print("El número es IMPAR");
  }
}

void loop() {

}

```

[Descarga el código para Arduino](Ejercicio3/Ejercicio3.ino)


<br />
<hr>
<br />


### Ejercicio 4

Dado dos número decir cual es mayor.

```
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
```

[Descarga el código para Arduino](Ejercicio4/Ejercicio4.ino)


<br />
<hr>
<br />


### Ejercicio 5

Dado 5 números decir cual es mayor de todos.

```
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
```

[Descarga el código para Arduino](Ejercicio5/Ejercicio5.ino)



***



#### Licencia

<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /> Esta obra se distribuye bajo licencia [Reconocimiento-CompartirIgual 4.0 Internacional (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).
