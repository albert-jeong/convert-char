#include <stdio.h>
#include "converthexadecimal.h"

void lowerToHex(const char* lower) {
    printf("Lowercase -> Hexadecimal: ");
    for (int i = 0; i < 4; i++) {
        printf("%X ", lower[i]);
    }
    printf("\n");
}