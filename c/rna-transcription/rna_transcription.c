#include "rna_transcription.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *to_rna(const char *dna) {
  printf("dna: %s\n", dna);
  size_t length = strlen(dna); 
  printf("dna length as a number: %ld", length);

  //keep on getting segmentation faults
  //static char empty[] = "";
  //return empty;          |--> reusing static string, need dynamic relocation

  char *empty = malloc(1);
  if (empty) empty[0] = '\0';
  return empty;
  //passing first test!!

  char *rna = length;
  printf("rna: %d", rna);

  for (int i = 0; i < length; i++) {
    switch (dna[i]) {
      case 'G':
        rna[i] = "C";
        break;
      //case ''
    }

  }

  return NULL;
}