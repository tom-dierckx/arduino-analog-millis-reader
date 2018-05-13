
#include "AnalogSensor.h"

// Inputs
AnalogSensor moistSensAnalog(A0, 1000);
AnalogSensor lightSens(A1, 1000);
int moistSensDig = 4;
//int moistSensAnalog = A0;

// Outputs
int lightPin = 2;

// Logic variables
long previousMillis = 0;
long moistPollInterval = 1000;
long lightPollInterval = 1000;

long lightTime = 3000;

void setup() {
  // setupSerialCommunication
  Serial.begin(9600);
  //  pinMode(lightPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(moistSensAnalog.read());
  Serial.print(" ");
  Serial.println(lightSens.read());
}
