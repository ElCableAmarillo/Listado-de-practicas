# Luz intermitente

![Animación](Animación.gif)

En esta práctica se va a construir y a programar un diodo Led que parpadea continuamente con una frecuencia de 1 segundo.

1.	[Materiales](#materiales)
2.	[Diagrama de flujo](#diagrama-de-flujo)
3.	[Esquema eléctrico](#esquema-eléctrico)
4.	[Programación en mBlock](#programación-en-mblock)
5.	[Programación en S4A](#programación-en-s4a)
6.	[Programación en Arduino](#programación-en-arduino)
7.  [Video resumen](#video-resumen)



***



### Materiales

Para llevar a cabo la práctica, vamos a necesitar los siguientes materiales:
- 1 Placa de Arduino UNO
- 1 Protoboard
- 2 latiguillos
- 1 Diodo Led
- 1 Resistencia



<br />
<hr>
<br />



### Diagrama de flujo

Antes de ponernos a desarrollar la práctica, conviene realizar un diagrama de flujo para entender la lógica de la programación.

![Diagrama de flujo](Diagrama-de-flujo.png)

[Descarga el diagrama de flujo para imprimir](Diagrama-de-flujo.html)



<br />
<hr>
<br />



### Esquema eléctrico

Al conectar un diodo led a una placa de Arduino, se ejerce sobre él una diferencia de potencial de 5V, es decir, estará recibiendo un voltaje o tensión de 5V (que es la tensión operativa que ejerce Arduino en sus pines).

| Diodos Led                       |        |
| -------------------------------- | ------ |
| Polarizado                       | Sí     |
| Itensidad de Corriente           | 20mA   |
| Tensión Led (verde, ámbar, rojo) | 2,1V   |
| Tensión Led blanco               | 3,3V   |

Como se puede observar en la tabla anterior, los diodos Led que vamos a utilizar para la práctica admiten una tensión de 2,1V (diodos Led verde, ámbar y rojo) y 3,3V (diodos Led blanco). 

Para evitar que se puedan dañar tendremos que colocarle una resistencia al circuito. Para ello, vamos a calcular el valor de la resistencia siguiendo la *Ley de Ohm* y teniendo en cuenta los datos de la tabla anterior.

Si los pines de Arduino ofrecen una tensión de 5V y la tensión máxima del diodo Led admite 2,1V, la diferencia de potencial que debemos tener en el diodo Led es de 5V – 2,1V = 2,9V. 

Colocando una resistencia al circuito estaremos disminuyendo la tensión. A diferencia de la tensión, la intensidad se mantiene constante durante el circuito con un valor de 20mA (que es la intensidad que ofrecen los pines de Arduino).


```

V = 2,9V
I = 20mA

V = I x R ; R = V / I

R = 2,9V / 0,02A = 145Ω 

```

Redondeamos el resultado obtenido a un valor de resistencia conocido (siempre por encima de su resistencia ideal), obtenemos un valor de 220Ω (rojo-rojo-marrón).

El siguiente paso será conectar los diferentes componentes sobre la placa de prototipado siguiendo el esquema eléctrico.

![Esquema eléctrico](Esquema-eléctrico.png)

[Descarga el esquema eléctrico para Fritzing](Esquema-eléctrico.fzz)



<br />
<hr>
<br />



### Programación en mBlock

Fijándonos en el diagrama de flujo programamos la práctica mediante lenguaje de programación por bloques mBlock. 

Podrás observar el gran parecido que se tiene con el diagrama de flujo.

![Programación en mBlock](Programación-mBlock.png)

[Descarga el código para mBlock](mBlock.sb2)



<br />
<hr>
<br />



### Programación en S4A

Fijándonos en el diagrama de flujo programamos la práctica mediante lenguaje de programación por bloques S4A. 

Podrás observar el gran parecido que se tiene con el diagrama de flujo.

![Programación en S4A](Programación-S4A.png)

[Descarga el código para S4A](S4A.sb)



<br />
<hr>
<br />




### Programación en Arduino

Al igual que en el apartado anterior y fijándonos en el diagrama de flujo, programamos en Arduino IDE la práctica propuesta.

```
// Se definen las variables de tipo entero
int ledPin = 13;
int delayTime = 1000;

//Este código se ejecuta la primera vez
void setup() {
  // Configuramos el pin en modo salida
  pinMode(ledPin, OUTPUT);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  // Se enciende el led
  digitalWrite(ledPin, HIGH);
  // Esperamos 
  delay(delayTime);
  // Se apaga el led
  digitalWrite(ledPin, LOW);
  // Esperamos 
  delay(delayTime);
}
```

[Descarga el código para Arduino](Arduino/Arduino.ino)



<br />
<hr>
<br />



### Video resumen

[![Video resumen](https://i.ytimg.com/vi_webp/yh4atShl390/maxresdefault.webp)](https://youtu.be/yh4atShl390)



***



#### Licencia

<img src="http://i.creativecommons.org/l/by-sa/4.0/88x31.png" /> Esta obra se distribuye bajo licencia [Reconocimiento-CompartirIgual 4.0 Internacional (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.es_ES).
