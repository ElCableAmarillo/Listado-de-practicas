
 

#define a 1
#define b 2
#define c 3
#define d 4
#define e 5
#define f 6
#define g 7
#define boton 8
#define finalCarrera 9
#define M1 10
#define M2 11
#define Gira digitalWrite (10, HIGH); digitalWrite (11, LOW)
#define Para digitalWrite (10, LOW); digitalWrite (11, LOW)
int i = 0;
int cTiempo = 0;
int acumula =0;

void setup() {
 
  for (i=1; i<8; i++) {
  pinMode(i, OUTPUT);
  }
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT); 
  pinMode(boton, INPUT);
  pinMode(finalCarrera, INPUT);
}
 void cero()  {
  for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
 digitalWrite (g, LOW);
}

 void uno()  {
  for (i=1; i<8; i++) {
  digitalWrite (i, LOW);
 }
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
 }
  void dos() {
    for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
    digitalWrite (c, LOW);
    digitalWrite (f, LOW);
 }
  void tres() {
    for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
    digitalWrite (e, LOW);
    digitalWrite (f, LOW);
 }
  void cuatro() {
    for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
    digitalWrite (a, LOW);
    digitalWrite (d, LOW);
    digitalWrite (e, LOW);
 }
void cinco() {
    for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
    digitalWrite (b, LOW);
    digitalWrite (e, LOW);
    
 }
void seis() {
  for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
  digitalWrite (b, LOW);
 }
void siete()  {
  for (i=1; i<8; i++) {
  digitalWrite (i, LOW);
 }
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  
}
void ocho()  {
  for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
 }
 void nueve() {
  for (i=1; i<8; i++) {
  digitalWrite (i, HIGH);
 }
    digitalWrite (e, LOW);
 }

 void marcador(){
      if (acumula == 0) {cero();}
      if (acumula == 1) {uno();}
      if (acumula == 2) {dos();}
      if (acumula == 3) {tres();}
      if (acumula == 4) {cuatro();}
      if (acumula == 5) {cinco();}
      if (acumula == 6) {seis();}
      if (acumula == 7) {siete();}
      if (acumula == 8) {ocho();}
      if (acumula == 9) {nueve();}
     }
void loop() {
    cero();
    cTiempo = 0;
    while (digitalRead (boton) == 0){}
    while (digitalRead (boton) == 1){
      cTiempo++;
      delay(10);
      if (cTiempo > 100 && cTiempo < 200) {uno();acumula = 1;} 
      if (cTiempo > 200 && cTiempo < 300) {dos();acumula = 2;} 
      if (cTiempo > 300 && cTiempo < 400) {tres();acumula = 3;} 
      if (cTiempo > 400 && cTiempo < 500) {cuatro();acumula = 4;}
      if (cTiempo > 500 && cTiempo < 600) {cinco();acumula = 5;} 
      if (cTiempo > 600 && cTiempo < 700) {seis();acumula = 6;} 
      if (cTiempo > 700 && cTiempo < 800) {siete();acumula = 7;} 
      if (cTiempo > 800 && cTiempo < 900) {ocho();acumula = 8;} 
      if (cTiempo > 900 && cTiempo < 1000) {nueve();acumula = 9;} 
    }
    delay (500);
    while (acumula > 0){
      Gira;
      delay (1000);
      while (digitalRead (finalCarrera) == 0){}
      delay(20);
      delay(1000);
      Para;
      acumula = acumula - 1;
      marcador();
      delay(1000);
     }
}   


    

  
