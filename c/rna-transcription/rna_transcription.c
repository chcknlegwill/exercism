#include "rna_transcription.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *to_rna(const char *dna) {
  //printf("dna: %s\n", dna);
  int length = strlen(dna); 
  char *rna = malloc(length + 1); //get length of rna from dna  

  //need to handle if rna == NULL:
  if (rna == NULL) {
    return NULL;
  } 


  for (int i = 0; i < length; i++) {
    if (dna[i] == 'C') {
      rna[i] = 'G';
    } else if (dna[i] == 'G') {
      rna[i] = 'C';
    } else if (dna[i] == 'T') {
      rna[i] = 'A';
    } else if(dna[i] == 'A') {
      rna[i] = 'U';
    } else {
      free(rna);
      return NULL;
    }
  }
  //printf("rna %s\n", rna);
  rna[length] = '\0';
  //need to handle NULL & add terminator at the end to avoid error: Expected '' Was '\x80'

  return rna;
}