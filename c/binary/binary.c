#include "binary.h"
#include "stdio.h"
#include <string.h>


int convert(const char *input) {

//need to work on filtering out non-binary characters 
// ^-> loop through the whole input array (cuz that's whats stored
//in the array).
//----<>char char[] = strlen(input);
//size_t i = -1;

//(didnt need to reverse the string at all...)
int result = 0;

if (input == NULL || *input == '\0') {
  return -1;
}

const char *i = input;
while (*i == '0') {
  i++;
  //skip leading zeros as zeros don't add anything
}
if(*i == 0) {
  return 0;
  //end of program
}


while(*i != '\0') {
  if(*i == '0' || *i == '1') {
    result = result * 2 + (*i - '0');
  } else {
    return -1;
  }
  i++;
}

//128, 64, 32, 16, 8, 4,| 2, 1   (start at 1 until 128 (step 8 - n * 2))
// ^(8)<---------------...(1)^--------|
  return result;
}

/*
//didn't need a for loop at all xD
int main() {

  char one[] = "101";
  printf("Binary: %s, Decimal: %d\n", one, convert("1010"));

  char two[] = "101010";
  printf("Binary %s, Decimal %d\n", two, convert(two));

  char invalid[] = "bruh";
  printf("Should be invalid, %s %d \n", two, convert(invalid));

  //printf("\n");
  //printf("test %c", convert("A10101"));

  return 0;
}

*/