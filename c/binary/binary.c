#include "binary.h"
#include "stdio.h"
#include <string.h>

int convert(const char *input) {

//need to work on filtering out non-binary characters 
// ^-> loop through the whole input array (cuz that's whats stored
//in the array).
//----<>char char[] = strlen(input);
//size_t i = -1;

//need to reverse string

int steps = 0;
char n = strlen(input);
for (int i = 0; i < strlen(input); i++) {
  steps++;
  printf("step: %d", steps);

  printf("i: %c", input[i]);
  printf("\n");
}

//128, 64, 32, 16, 8, 4,| 2, 1   (start at 1 until 128 (step 8 - n * 2))
// ^(8)<---------------...(1)^--------|
  return 0;
}
int main() {
  //printf("ruh moment");
  //printf("%d", convert("101010"));

//               1-:4, 0-:2, 1-: 1
  convert("101");
  //should return 5!!!

printf("==========================\n");
  convert("101010");
  //should return 42!!

  //printf("\n");
  //printf("test %c", convert("A10101"));

  return 0;
}