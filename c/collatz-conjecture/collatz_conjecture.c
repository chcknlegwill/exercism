#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start) {

    int n = start;

    if(n <= 0) {
        return -1;
    }
    //if n is even -> n /2
    //if n is odd -> n * 3 +1 to get 3n + 1
    //repeat until starting num = 1
    int steps = 0;

    //had a for loop, a while loop would be much more suitable here

    while ( 1 < n) {
        //printf("i:%d ", i);
        if (n % 2 == 0 ) {
            n = n / 2;
            steps++;
        } else {
            n = n * 3 + 1;
            steps++;
        }
        //printf("steps %d\n", steps);
    } 
        
    return steps;
}

/* main func for debugging purposes
int main() {
    steps(12);
}
*/