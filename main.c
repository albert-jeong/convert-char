#include <stdio.h>
#include "convertlower.h"
#include "converthexadecimal.h"
#include "convertdecimal.h"

int main(void) {
    char upper[4];
    char lower[4];

    printf("Enter 4 capital letters A to F (e.g. A B C D): ");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &upper[i]);
    }

    upperToLower(upper, lower);

    lowerToHex(lower);

    lowerToDec(lower);

    return 0;
}