int pinArray[] = {4,5, 6, 7,8,9,10,11,12}; // Define el array de pines
int count = 1;
// Contador
int espera = 100;
// Temporizador
void setup(){
for (count=1;count<9;count++){ // Configuramos todos los PINs
pinMode(pinArray[count], OUTPUT);
}
}
void loop() { // Enciende y apaga los LEDs
for (count=1;count<9;count++) { 
digitalWrite(pinArray[count], HIGH); 
delay(espera);
digitalWrite(pinArray[count], LOW);
delay(espera);
}
for (count=9;count>=1;count--) {
digitalWrite(pinArray[count], HIGH); 
delay(espera);
digitalWrite(pinArray[count], LOW);
delay(espera);
}
for (count=1;count<9;count++) { // Enciende los LEDs creando una estela
digitalWrite(pinArray[count], HIGH);
delay(espera);
digitalWrite(pinArray[count + 1], HIGH);
delay(espera);
digitalWrite(pinArray[count], LOW);
delay(espera*2);
}
for (count=9;count>1;count--) {
digitalWrite(pinArray[count], HIGH);
delay(espera);
digitalWrite(pinArray[count - 1], HIGH);
delay(espera);
digitalWrite(pinArray[count], LOW);
delay(espera*2);
}
for (count=1;count<4;count++) { // 0tra secuencia de encendido

digitalWrite(pinArray[count], HIGH); 
digitalWrite(pinArray[count+3], HIGH); 
digitalWrite(pinArray[count+6], HIGH); 
delay(300);
digitalWrite(pinArray[count], LOW);
digitalWrite(pinArray[count+3], LOW);
digitalWrite(pinArray[count+6], LOW);
delay(300);
}

}
 
