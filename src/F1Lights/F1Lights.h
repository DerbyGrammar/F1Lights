#ifdef F1Lights_h
#define F1Lights_h

#include "Arduino.h"

class F1Lights {
  public:
    F1Lights(int pins[]);
    void runSequence();
    void lightsOff();
  private:
    int _pins[];
}

#endif
