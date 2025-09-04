#include "hamming.h"
#include <stdio.h>
#include <string.h>

int compute(const char *lhs, const char *rhs){
  if(*lhs < 0 || *rhs < 0) {
    return  -1;
  }
  int lenLeft = strlen(lhs);
  int lenRight = strlen(rhs); //Don't need separate variables as they are the same length
  if(lenLeft != lenRight) {
    return -1;
  }

  int count = 0;

  for (int i = 0; i < lenLeft; i++) {
    printf("lhs %d\n", lhs[i]);
    printf("rhs %d\n", rhs[i]);
    if(lhs[i] != rhs[i]) {
      count++;
    }
  }
 
  return count;
}
