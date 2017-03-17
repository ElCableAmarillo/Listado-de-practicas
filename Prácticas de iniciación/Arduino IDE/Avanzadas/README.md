# Avanzadas



***



### Ejercicio 1

```
/**
 * Ejercicio 1
 * 
 * + + + + + + + + + + 
 * + + + + + + + + + 
 * + + + + + + + + 
 * + + + + + + + 
 * + + + + + + 
 * + + + + + 
 * + + + + 
 * + + + 
 * + + 
 * + 
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
    for(int j=i; j<=10; j++){
      Serial.print("+ ");
    }
    Serial.println();
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

```
/**
 * Ejercicio 2
 * 
 * - - - - - - - - - - 
 * + + + + + + + + + 
 * - - - - - - - - 
 * + + + + + + + 
 * - - - - - - 
 * + + + + + 
 * - - - - 
 * + + + 
 * - -  
 * + 
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
    for(int j=i; j<=10; j++){
      if(i%2 == 0)
        Serial.print("+ ");
      else
        Serial.print("- ");
    }
    Serial.println();
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
```

[Descarga el código para Arduino](Ejercicio3/Ejercicio3.ino)



***



#### Licencia

<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /> Esta obra se distribuye bajo licencia [Reconocimiento-CompartirIgual 4.0 Internacional (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).
