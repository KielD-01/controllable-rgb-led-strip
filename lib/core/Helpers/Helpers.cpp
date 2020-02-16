#include "Helpers.h"

int Helpers::generateColor(int MinColor, int MaxColor) {
    return rand() % MaxColor + MinColor;
}