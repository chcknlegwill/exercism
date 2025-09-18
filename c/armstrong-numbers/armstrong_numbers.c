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

  printf("\narray: ");
  for(int i = 0; i < numLength; i++) {
    printf("%d", numArray[i]);
  }
  printf("\n");
  //printf("\nnumArray holds all numbers in the correct order!!!");
  
  //return false;

  int armstrongNumber = 0;
  for(int i = 0; i < numLength; i++) {
    //printf(" numarray:[%d]: %d ", i, numArray[i]);
    //printf("\n armstrong number: %d\n", armstrongNumber);
    int numberPower = 1;
    for(int j = 0; j < numLength; j++) {
      numberPower *= numArray[i];
    }
    armstrongNumber += numberPower;
  }

  if (armstrongNumber == number) {
    //printf("\n armstrong number: %d\n", armstrongNumber);
    return true;
  }

  return false;
}