# Bucles

Los bucles realizan repeticiones según la condición dada. Los principales bucles que vamos a ver son los siguientes:

- [For](https://www.arduino.cc/en/Reference/For) para un número de repeticiones conocido
- [While](https://www.arduino.cc/en/Reference/While) para un número de repeticiones aleatorio



***



### Ejercicio 1

Recorre un bucle desde 1 hasta 10 mostrando el número de iteración en línas separadas.

```
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
```

[Descarga el código para Arduino](Ejercicio1/Ejercicio1.ino)


<br />
<hr>
<br />


### Ejercicio 2

Recorre un bucle desde 1 hasta 10 mostrando y muestra el valor cuando la iteración sea un número par.

```
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
```

[Descarga el código para Arduino](Ejercicio2/Ejercicio2.ino)


<br />
<hr>
<br />


### Ejercicio 3

Muestra los números desde el 1 hasta el 10 en orden ascendente y luego en descendente.

```
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
```

[Descarga el código para Arduino](Ejercicio3/Ejercicio3.ino)


<br />
<hr>
<br />


### Ejercicio 4

Recorre un bucle un número aleatorio de veces entre 1 y 20.

```
/**
 * Ejercicio 4
 * 
 * Recorre un bucle un número aleatorio de veces entre 1 y 20.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
int aleatorio;

void setup() {
  Serial.begin(9600);

  randomSeed(analogRead(0));
  aleatorio = random(0, 21);
  
  Serial.print("El número aleatorio es: ");
  Serial.println(aleatorio);
  while(aleatorio>0){
    Serial.println(aleatorio);
    aleatorio--;
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

Recorre una matriz de 3 x 3 representando el valor de sus posiciones en coordenadas.

```
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
```

[Descarga el código para Arduino](Ejercicio5/Ejercicio5.ino)



***



#### Licencia

<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /> Esta obra se distribuye bajo licencia [Reconocimiento-CompartirIgual 4.0 Internacional (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).
