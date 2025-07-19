#include "difference_of_squares.h"
//Time-complexity: O(n)
//Space-complexity: O(1) 
//^For all functions

unsigned int sum_of_squares(unsigned int number)  {
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
  }
  sum = sum * sum;
  return sum;
}

unsigned int difference_of_squares(unsigned int number) {
  return square_of_sum(number) - sum_of_squares(number);
}

