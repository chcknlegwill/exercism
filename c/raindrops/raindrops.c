#include "raindrops.h"
#include <stdio.h>

void convert(char result[], int drops) {
  //printf("Result[] = %s\n", result);
  //printf("Drops = %d\n", drops);
  result[0] = "\0";
  char str[20];
  char pling[5] = "pling";

  if (drops % 3 == 0) {
    result[1] += pling;
  }
  else {
    sprintf(str, "%d", drops);
    printf("int is now a string: %s", str);

  }

}
 

}