#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

class Display {

    private:
        int SDA_PIN = 20, 
            SCL_PIN = 21;

        // Display Settings
        int WidthSpanSize = 8, 
            HeightSpanSize = 8;

    public:
        Display(int SDA_PIN = 20, int SCL_PIN = 21) {
            this->SDA_PIN = SDA_PIN;
            this->SCL_PIN = SCL_PIN;
        }

        void initializeDisplay() {

        }

        void setText(char* Text, bool ClearDisplay = false, int Y_POSITION = 0, int X_Position = 0) {
            
        }

        /**
         * Sets the width span of the character/symbol position on the display
         */ 
        void setWidthSpanSize(int WidthSpan = 8) {
            this->WidthSpanSize = WidthSpan;
        }

        /**
         * Sets the height span of the character/symbol position on the display 
         */
        void setHeightSpanSize(int HeightSpan = 8) {
            this->HeightSpanSize = HeightSpan;
        }

};