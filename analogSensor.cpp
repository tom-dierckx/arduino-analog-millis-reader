#include "Arduino.h"
#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(int pin, long interval)
{
  _pin = pin;
  _interval = interval;
  // set default to 0
  _previousMillis = 0;
}
int AnalogSensor::read()
{
  unsigned long currentMillis = millis();
   if (currentMillis - _previousMillis > _interval)
   {
    return analogRead(_pin);
   }
}

