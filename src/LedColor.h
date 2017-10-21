#ifndef LedColor_h
#define LedColor_h

#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

class LedColor {
public:
    LedColor(byte redPin, byte greenPin, byte bluePin);
    LedColor(byte* pins);

    void setColor(byte red, byte green, byte blue);
    void setColor(byte* colors);

private:
    byte _pins[3];
};

#endif