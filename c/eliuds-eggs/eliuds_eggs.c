#include "eliuds_eggs.h"
#include <stdio.h>

int egg_count(int number) {
  //printf("number: %d\n", number);
  if(number == 0) {
    return 0;
  }//base case
  
  //need to get number of eggs from number - specifically the binary representation...
  int count = 0;
  int n = number;
  while(n != 0) {
    //printf("n: %d\n", n);
    count += n & 1; //increments count if LSB is 1, if not then continue shifting bits to the left:
    n >>= 1;        // e.g. 010010 -(LSB=0)-> 001001 -(LSB=1)-> 000100 -(LSB=0)->...
  }                 //                                  ^-count++
  return count;
}
