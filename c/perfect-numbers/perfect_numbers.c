#include "perfect_numbers.h"
#include <stdio.h>

int classify_number(int number) {
  if (number <= 0) {
    return ERROR;
  }

  //perfect numbers
  int alliqoutSum = 0;
  for(int i = 1; i < number; i++) {
    if (number % i == 0) {
      alliqoutSum += i;
    }
  }

  //Abundandt
  if(number < alliqoutSum) {
    return 2; 
  }
  //Deficient
  if(number > alliqoutSum) {
    return 3;
  }
  return 1;
  

}