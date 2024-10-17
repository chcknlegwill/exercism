#include "grains.h"
#include <stdint.h>
#include <stdio.h>
//there are 64 squares, so run a loop 64 times?

uint64_t square(uint8_t index) { 
    if (index < 1 || index > 64) {
        return 0; // invalid square input
    }
    //int square;

    /*
    for(uint8_t grains= 1; grains <= 65; grains++) {
        printf("Square %2hhu: %lu grains\n", grains, square(grains));
    }
    return 0;
    */
    return (uint64_t)1 << (index - 1);
    //bit shifting makes using above for loop redundant
    //shifting 1 left (<-- = <<) across the 0000's.
    //& it is MUCH more efficient than the for loop above as it's just one operation compared to several per iteration*.

}

uint64_t total(void) {
    return UINT64_MAX;
    //returns 2^64 -> sum of all the grains in the square
}

/*
// need to comment for the tests - working well maybe apart from one test
int main() {
int board = 64;
int square = 0;
long long int grains = 1;

    for(uint8_t i = 1; i <= 64; i++) {
        //printf("Square %2d: %lu grains\n", i, square(i));
        printf("square: %hhu-->", i);
        printf("grains: %lld\n", grains);
        grains *= 2;
    }
    
    //printf("%lu", square(5));
    printf("===============\n");
    printf("Total grains: %lu\n", total());
    return 0;
}
*/