#include <stdio.h>
#include "convertlower.h"

void upperToLower(const char* upper, char* lower) {
    for (int i = 0; i < 4; i++) {
        lower[i] = upper[i] + 32;
    }

    printf("Uppercase -> Lowercase: ");
    for (int i = 0; i < 4; i++) {
        printf("%c ", lower[i]);
    }
    printf("\n");
}