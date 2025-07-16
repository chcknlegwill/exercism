#include "difference_of_squares.h"
#include <stdio.h>



unsigned int sum_of_squares(unsigned int number)  {
  //sum of squares = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  int num = number;
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i * i;
  }
  return sum;
}

unsigned int square_of_sum(unsigned int number) {
  int num = number;
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;   
    //printf("i = %d | ", i); 
    //printf("sum = %d\n", sum); 
  } //we have 15!!!! we are getting somewhere
  sum = sum * sum;
  return sum;
}

unsigned int difference_of_squares(unsigned int number) {
  return square_of_sum(number) - sum_of_squares(number);
}

