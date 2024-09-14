#include "binary.h"
#include "stdio.h"
#include <string.h>

int convert(const char *input) {

//need to work on filtering out non-binary characters 
// ^-> loop through the whole input array (cuz that's whats stored
//in the array).
int p = strlen(input);
//size_t i = -1;

for (int c = p; c != '\0'; c = ++p) {
  /*
  if(input[c] != *"0" || input[c] != *"1") {
    printf("err");
    return -1;
  } */
  printf("%c", input[c]);
  //printf("%c\n", c);
} 
//                      
//128, 64, 32, 16, 8, 4,| 2, 1   (start at 1 until 128 (step 8 - n * 2))
// ^(8)<---------------...(1)^--------|






/*
for (i = 0; i < length; i++) {
  printf("%c\n", input[i]);
  if (input[i] == *" " || input[i] != *"0" || input[i] != *"1") {
    printf("BEUHMOEMENT");
    return -1;
  } //checks input ig
}
*/
/*
while (input[i] != '\0') {
  printf("%c", input[i]);
  i++;
}*/


  //printf("input: %s", input);
  // printf("convert bruh");


  //compilingo \||/
  return 0;
}


int main() {
  //printf("ruh moment");
  //printf("%d", convert("101010"));

  //printf("\n");
  printf("test %c", convert("A10101"));

  return 0;
}