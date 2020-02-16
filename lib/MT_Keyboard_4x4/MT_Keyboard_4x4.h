#include <Arduino.h>
#include "Keypad.h"

#ifndef MT_Keyboard_4x4_H
    #define MT_Keyboard_4x4_H

    class MatrixKeyboard4x4 {
        private:
            byte *ColumnsPins,
                 *RowsPins;

            char *KeyMap;
            Keypad *KeyPad; 

        public:
            MatrixKeyboard4x4(byte *ColumnsPins, byte *RowsPins);

            void setColumns(byte *Pins);
            void setRows(byte *Pins);
            void setKeyMap(char *KeyMap);
            void setKeyPad(Keypad KeyPad);
            Keypad* getKeyPad();
            
        protected:
 
    }; 

#endif