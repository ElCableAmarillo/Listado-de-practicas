/**
 * Detector de aparcamiento
 * 
 * En esta práctica vamos a calcular la distancia de aparcamiento en un 
 * vehículo mostrando una señal acústica a medida se va acercando al
 * obstáculo.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Se definen las variables de tipo entero
int zumbadorPin = 13;
int trigPin = 12;
int echoPin = 11;

//Este código se ejecuta la primera vez
void setup() {
  Serial.begin (9600);
  pinMode(zumbadorPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  //Inicialización  de los pines
  digitalWrite(zumbadorPin, LOW);
  digitalWrite(trigPin, LOW);
}

//Este código se ejecuta en bucle repetidamente
void loop() {
  
  //Enviamos un pulso durante 10µs
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //Obtenemos la duración del pulso (ida+vuelta) en µs
  long tiempo;
  tiempo = pulseIn(echoPin, HIGH);

  //Calculamos la distancia. Velocidad Sonido = 343 m/s
  float distancia = 34300*tiempo*0.000001;
  distancia = distancia / 2; //Solo IDA

  Serial.print("Distancia: ");
  Serial.println(distancia);
  
  //Encendemos el zumbador si estamos a menos de 30 cms
  if(int(distancia)<30){
    //Encendemos el zumbador si estamos a menos de 10 cms
    if(int(distancia)<10){
      digitalWrite(zumbadorPin, HIGH);
    }else{
      digitalWrite(zumbadorPin, HIGH);
      delay(50);
      digitalWrite(zumbadorPin, LOW);
      delay(distancia*5);
    }
  }else{
    digitalWrite(zumbadorPin, LOW);
  }
}