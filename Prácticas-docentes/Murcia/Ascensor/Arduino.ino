/* Programa para practica con el ascensor.
    Tenemos tres pisos
    cada uno de ellos con sensor de fin de carrera
    pulsador de llamada. Además un motor con cambio
    de sentido, mueve la cabina
*/

int pul01 = 0;  // Pulsadores de llamada
int pul02 = 2;
int pul03 = 4;

int sens01 = 6; // Finales de carrera
int sens02 = 8;
int sens03 = 10;

int motorA = 12; // Al driver del motor
int motorB = 13;

void sube(int sensor);
void baja(int sensor);

void setup() {
  pinMode(pul01, INPUT);
  pinMode(pul02, INPUT);
  pinMode(pul03, INPUT);

  pinMode(sens01, INPUT);
  pinMode(sens02, INPUT);
  pinMode(sens03, INPUT);

  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);

}

void loop() {
  if (digitalRead(pul01))
  {
    baja(sens01);
  }
  if (digitalRead(pul02))
  {
    if (digitalRead(sens01))
    {
      sube(sens02);
    }
    if (digitalRead(sens03))
    {
      baja(sens02);
    }
  }
  if (digitalRead(pul03))
  {
    sube(sens03);
  }

}
void sube(int sensor) {
  while (!(digitalRead(sensor)))
  {
    digitalWrite(motorA, HIGH); //A=1 y B=0 sube
    digitalWrite(motorB, LOW);
  }
  digitalWrite(motorA, LOW); // A=0 y B=0 parado
}
void baja(int sensor) {
  while (!(digitalRead(sensor)))
  {
    digitalWrite(motorB, HIGH); //A=0 y B=1 baja
    digitalWrite(motorA, LOW);
  }
  digitalWrite(motorB, LOW); // A=0 y B=0 parado
}

