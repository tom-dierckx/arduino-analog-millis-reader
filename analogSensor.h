/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef AnalogSensor_h
#define AnalogSensor_h

#include "Arduino.h"

class AnalogSensor
{
  public:
    AnalogSensor(int pin, long interval);
    int read();
  private:
    int _pin;
    long _interval;
    unsigned long _previousMillis;
};

#endif
