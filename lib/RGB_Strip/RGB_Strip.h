#ifndef RGB_STRIP_H
#define RGB_STRIP_H

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "Helpers/Helpers.h"

class RGBStrip {

    private:
        int DataPin = 8,
            LedsCount = 30,
            MinPin = 2,
            MaxPin = 53;
        
        Helpers helper;
        Adafruit_NeoPixel LED_Strip;

    public:
        /**
         * This is a comment to the method
         */
        RGBStrip(int DataPin = 8, int LedsCount = 30);
        
        void init();
        void testRun(int BlinkDelay = 10);
        void runWithColor(int RGB[3], int BlinkDelay = 40);
        void blinkStrip(int RGB[3], int BlinkDelay = 40);
        void light(int RGB[3]);
        
        Adafruit_NeoPixel getStrip(); 
};

#endif