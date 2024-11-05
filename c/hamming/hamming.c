#include "hamming.h"
#include <stdio.h>
#include <string.h>




int compute(const char *lhs, const char *rhs){
  //test for an empty strand first;
  //& equal length
  if(*lhs < 0 || *rhs < 0) {
    //printf("Too small!!!!"); working!
    return  -1;
  }
  int lenLeft = strlen(lhs);
  int lenRight = strlen(rhs); //Don't need separate variables as they are the same length
  if(lenLeft != lenRight) {
    return -1;
  }

  int count = 0;

  //int output = strcmp(lhs, rhs);

  printf("Left side: \n");
  for (int i = 0; i < lenLeft; i++) {
    //printf("lhs %d\n", lhs[i]);
    //printf("rhs %d\n", rhs[i]);
    if(lhs[i] != rhs[i]) {
      count++;
    }//didn't need the else {i++} statement. 
  }
//printf("Count: %d\n", count);
 
  return count;
}

/*
int main() {

  printf("Running hamming distance tests:\n\n");

    
    // Test empty strands
    //printf("Test empty strands: ");
    int result = compute("", "");
    //printf("Expected: 0, Got: %d\n", result);

    // Test single identical strands
    //printf("Test single identical strands: ");
    //result = compute("A", "A");
    //printf("Expected: 0, Got: %d\n", result);

    // Test single different strands
    //printf("Test single different strands: ");
   // result = compute("G", "T");
    //printf("Expected: 1, Got: %d\n", result);

    // Test long identical strands
    //printf("Test long identical strands: ");
    //result = compute("GGACTGAAATCTG", "GGACTGAAATCTG");
    //printf("Expected: 0, Got: %d\n", result);

    // Test long different strands
    //printf("Test long different strands: ");
    result = compute("GGACGGATTCTG", "AGGACGGATTCT");
    printf("Expected: 9, Got: %d\n", result);

    // Test disallow first strand longer
    //printf("Test disallow first strand longer: ");
    //result = compute("AATG", "AAA");
    //printf("Expected: -1, Got: %d\n", result);

    // Test disallow second strand longer
    //printf("Test disallow second strand longer: ");
    //result = compute("ATA", "AGTG");
    //printf("Expected: -1, Got: %d\n", result);


    return 0;
}
*/

