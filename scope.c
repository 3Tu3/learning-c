#include <stdio.h>

void add_10();

void main() {
    int nicolas = 0;

    add_10();
}

void add_10() {
    nicolas = nicolas + 10;

    printf("nicolas = %d\n", nicolas);
}