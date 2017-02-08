/**
 * La Guerra de las Galaxias
 * 
 * A través de un zumbador reproducimos la banda sonora de La Guerra
 * de las Galaxias mediante frecuencias.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Definimos la variable del zumbador de tipo entero
int zumbadorPin = 9;

// En cada array reproducimos las 5 frecuencias de cada nota
int c[5]={131,262,523,1046,2093}; // Do
int d[5]={147,294,587,1175,2349}; // Re
int e[5]={165,330,659,1319,2637}; // Mi
int f[5]={175,349,698,1397,2794}; // Fa
int g[5]={196,392,784,1568,3136}; // Sol
int a[5]={220,440,880,1760,3520}; // La
int b[5]={247,494,988,1976,3951}; // Si


// Funcion para reproducir una nota durante un determinado tiempo
void nota(int frecuencia, int duracion)
{
  tone(zumbadorPin, frecuencia);
  delay(duracion);
  noTone(zumbadorPin);
  delay(50);

}

//Este código se ejecuta la primera vez
void setup() {

}

//Este código se ejecuta en bucle repetidamente
void loop() {
  nota(f[2],500);
  nota(f[2],500);
  nota(f[2],500);
  nota(d[2],250);
  nota(a[2],250);
  nota(f[2],500);
  nota(d[2],250);
  nota(a[2],250);
  nota(f[2],500);
  delay(500);
  nota(c[3],500);
  nota(c[3],500);
  nota(c[3],500);
  nota(d[3],250);
  nota(a[2],250);
  nota(f[2],500);
  nota(d[2],250);
  nota(a[2],250);
  nota(f[2],500);
  delay(1000);
}

