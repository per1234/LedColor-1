#include "LedColor.h"

LedColor::LedColor(byte redPin, byte greenPin, byte bluePin) {
    _pins[0] = redPin;
    _pins[1] = greenPin;
    _pins[2] = bluePin;

    for(byte i=0; i<3; i++) {
        pinMode(_pins[i], OUTPUT);
    }
}

LedColor::LedColor(byte* pins) {
    for(byte i=0; i<3; i++) {
        _pins[i] = pins[1];
        pinMode(_pins[i], OUTPUT);
    }
}

void LedColor::setColor(byte red, byte green, byte blue) {
    byte colors[] = {red, green, blue};
    this->setColor(colors);
}

void LedColor::setColor(byte* colors) {
    for(byte i=0; i<3; i++) {
        analogWrite(_pins[i], colors[i]);
    }
}
