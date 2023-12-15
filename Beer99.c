#include <stdio.h>
#include <stdlib.h>

int main() {
    int beer = 99;
    while (beer != -1) {

        if (beer > 1) {
            printf("%d ", beer);
            printf("bottles of beer on the wall, %d ", beer);
            printf(" bottles of beer.\n");
            beer = beer -1;
            printf("Take one down and pass it around %d bottles of beer on the wall.\n\n", beer);
        }
        else if (beer == 1) {
            printf("%d ", beer);
            printf("bottle of beer on the wall, %d ", beer);
            printf(" bottle of beer.\n");
            beer = beer -1;
            printf("Take one down and pass it around no more bottles of beer on the wall.\n\n");
        }
        else if (beer == 0) {
            printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
            break;
        }
        else {
            printf("%d ", beer);
            printf("bottles of beer on the wall, %d ", beer);
            printf("bottles of beer.\n");
            beer = beer -1;
            printf("Take one down and pass it around %d bottles of beer on the wall.\n\n", beer);
            
        }
    }
}