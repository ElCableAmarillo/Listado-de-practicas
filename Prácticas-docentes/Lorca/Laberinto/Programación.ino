
#include <Stepper.h>

const int stepsPerRevolution = 10;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int plab = 0;

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(1000);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, OUTPUT);
  digitalWrite(A1, HIGH);
  
}

void loop() {
  Serial.println(plab);
  int pot = analogRead(A0);
  Serial.println(pot);
  int pot2 = (pot * 2.6) - 1500;
  Serial.println(pot2);
  int dif = (pot2 - plab);

  for (int i = 0; i<dif; i=i+10) {
    myStepper.step(stepsPerRevolution);
    Serial.println(i);
    
  }
   for (int i = 0; i>dif; i=i-10) {
    myStepper.step(-stepsPerRevolution);
    
  }
  plab = pot2;
  
 
  delay(500);

}
