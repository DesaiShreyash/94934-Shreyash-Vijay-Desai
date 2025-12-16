#include <stdio.h>

int main() {
    int i;
    int reg = 0xABCD;
    int array[16];

    for (int i = 0; i < 16; i++) {
        array[15 - i] = (reg >> i) & 1;
    }

    printf("Binary of 0xABCD: ");
    for (int i = 0; i < 16; i++) {
        printf("%d", array[i]);
    }
    printf("\n");

    for (i = 15; i > 11; i--) {
        printf("%d", array[i]);
    }
      printf("\n");

    for (i = 15; i > 7; i--) {
        printf("%d", array[i]);
    }
      printf("\n");
      
         for (i = 0; i < 4; i++) {
        printf("%d", array[i]);
    }
    printf("\n");

    for (i = 0; i < 7; i++) {
        printf("%d", array[i]);
    }

    return 0;
}

