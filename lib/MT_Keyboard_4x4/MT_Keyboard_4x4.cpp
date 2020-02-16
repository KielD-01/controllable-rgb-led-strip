#include "MT_Keyboard_4x4.h"

MatrixKeyboard4x4::MatrixKeyboard4x4(byte *ColumnsPins, byte *RowsPins) {
    this->setColumns(ColumnsPins);
    this->setRows(RowsPins);
}

void MatrixKeyboard4x4::setColumns(byte *Pins) {
    this->ColumnsPins = Pins;
}

void MatrixKeyboard4x4::setRows(byte *Pins) {
    this->RowsPins = Pins;
}

void MatrixKeyboard4x4::setKeyMap(char *KeyMap) {
    this->KeyMap = makeKeymap(KeyMap);
    this->KeyPad = new Keypad(this->KeyMap, this->RowsPins, this->RowsPins, 4, 4);
}

Keypad MatrixKeyboard4x4::getKeyPad() {
    return *this->KeyPad;
}