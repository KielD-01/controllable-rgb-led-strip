#include "Adafruit_NeoPixel.h"
#include "RGB_Strip.h"

/**
 * Initializing the DataPin (Default: 8) and LedsCount (Default: 30) for the LED Strip
 */ 
RGBStrip::RGBStrip(int DataPin, int LedsCount)
{
    this->DataPin = DataPin;
    this->LedsCount = LedsCount;
    this->LED_Strip = Adafruit_NeoPixel(this->LedsCount, this->DataPin, NEO_GRB + NEO_KHZ800);
}

/**
 * Strip starting up
 */ 
void RGBStrip::init()
{
    Serial.write("Led has been initiated");
    this->LED_Strip.begin();
    this->LED_Strip.clear();

    this->helper = Helpers();
}

/**
 * Returns NeoPixel instance of the current RGB Strip
 */ 
Adafruit_NeoPixel RGBStrip::getStrip()
{
    return this->LED_Strip;
}

/**
 * Running a test to check if Strip is working
 */ 
void RGBStrip::testRun(int BlinkDelay)
{
    for (int led = 0; led <= this->LedsCount; led++)
    {  
        this->LED_Strip.setPixelColor(led, this->LED_Strip.Color(this->helper.generateColor(), this->helper.generateColor(),this->helper.generateColor()));
        delay(BlinkDelay);
        this->LED_Strip.show();
    }
    
    delay(BlinkDelay);

    for (int led = 0; led <= this->LedsCount; led++)
    {  
        this->LED_Strip.setPixelColor(led, this->LED_Strip.Color(0, 0, 0));
        delay(BlinkDelay);
        this->LED_Strip.show();
    }
}

void RGBStrip::runWithColor(int RGB[3], int BlinkDelay) {
    for (int led = 0; led <= this->LedsCount; led++)
    {  
        this->LED_Strip.setPixelColor(led, this->LED_Strip.Color(RGB[0], RGB[1], RGB[2]));
        delay(BlinkDelay);
        this->LED_Strip.show();
    }
    
    delay(BlinkDelay);

    for (int led = 0; led <= this->LedsCount; led++)
    {  
        this->LED_Strip.setPixelColor(led, this->LED_Strip.Color(0, 0, 0));
        delay(BlinkDelay);
        this->LED_Strip.show();
    }
}