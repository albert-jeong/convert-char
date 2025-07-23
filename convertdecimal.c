#include <stdio.h>
#include "convertdecimal.h"

void lowerToDec(const char* lower) {
    printf("Lowercase -> Decimal: ");
    for (int i = 0; i < 4; i++) {
        printf("%o ", lower[i]); // %d -> %o
    }
    printf("\n");
}
