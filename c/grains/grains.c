#include "grains.h"
#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>
//there are 64 squares, so run a loop 64 times?

uint64_t square(uint8_t index) { 
    if (index < 1 || index > 64) {
        return 0; // invalid square input
    }
    //int square;

    for(uint8_t grains= 1; grains <= 65; grains++) {
        printf("Square %2hhu: %lu grains\n", grains, square(grains));
    }
    return 0;
}

uint64_t total(void) {
    return UINT64_MAX;
    //returns 2^64 -> sum of all the grains in the square
}
int main() {
//    int board = 64;
    //int square;
        //long long int grains = 1;

    for(uint8_t i = 1; i <= 64; i++) {
        printf("Square %2d: %lu grains\n", i, square(i));
        //printf("i: %lu\n", i);
        //grains *= 2;
        //printf("grains: %lld", grains);
    }
    
    printf("%lu", square(5));
    printf("buhr");
    printf("Total grains: %lu\n", total());
    return 0;
}