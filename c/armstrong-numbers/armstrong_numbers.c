#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdbool.h>

bool is_armstrong_number(int number) {
  if (number == 0) {
    return true;
  }


  printf("number: %d ", number);
  int numLength = 0;
  int numTemp = number;
  while (numTemp > 0) {
    numLength++;
    numTemp /= 10;
  }
  printf("numLength: %d\n", numLength);

  int numArray[numLength];
  numTemp = number;
  for(int i = numLength - 1; i >= 0; i--) {
    //printf("numTemp: %d \n", numTemp);
    //printf("numarray[%d]: %d \n", i, numArray[i]);
    numArray[i] = numTemp % 10;
    numTemp /= 10;
  }

  for(int i = 0; i < numLength; i++) {
    printf("%d", numArray[i]);
  }
  printf("\nnumArray holds all numbers in the correct order!!!");
  
  return false;
}