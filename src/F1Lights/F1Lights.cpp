#include "Arduino.h"
#include "F1Lights.h"

F1Lights::F1Lights(int pins[], int delay) {
  _delay = delay;
  for(int i = 0; i < (sizeof(pins)/sizeof(pins[0])); i++) {
    pinMode(pins[i], OUTPUT);
    _pins[i] = pins[i];
  }
}
