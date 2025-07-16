#include "difference_of_squares.h"
#include <stdio.h>



unsigned int sum_of_squares(unsigned int number)  {
  return number;
}

unsigned int square_of_sum(unsigned int number) {
  int num = number;
  //int[] nums_to_sum;
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;   
    printf("i = %d | ", i); 
    printf("sum = %d\n", sum); 
  } //we have 15!!!! we are getting somewhere
  sum = sum * sum;
  return sum;
}

unsigned int difference_of_squares(unsigned int number) {
  return number;
}

