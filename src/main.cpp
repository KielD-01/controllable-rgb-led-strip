#include <Arduino.h>

// Internal libraries
// g#include <Display.h>
#include <Keypad.h>
#include <RGB_Strip.h>
#include <MT_Keyboard_4x4.h>

const byte KbrdRows = 4;
const byte KbrdCols = 4;

byte KbrdColumnsPins[KbrdCols] = {30, 31, 32, 33},
    KbrdRowsPins[KbrdRows] = {34, 35, 36, 37};

char KeyMap[KbrdRows][KbrdCols] ={
        {'1', '2', '3', 'A'},
        {'4', '5', '6', 'B'},
        {'7', '8', '9', 'C'},
        {'*', '0', '#', 'D'}
};

RGBStrip strip(53, 30);
MatrixKeyboard4x4 kbrd(KbrdColumnsPins, KbrdRowsPins);

void setup() {
  Serial.begin(9600);

  strip.init();
  kbrd.setKeyMap((char*) KeyMap);
}

void loop() {
 
    strip.testRun(42);
  // put your main code here, to run repeatedly:
}