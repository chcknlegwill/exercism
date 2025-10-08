#include "isogram.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
  if (phrase == NULL) {
    return false;
  }

  int strLength = strlen(phrase);
  //printf("strLength = %d\n", strLength);

  char str[strLength + 1];


  for(int i = 0; i < strLength +1; i++) {
    //printf("str = %s\n", str);
    str[i] = tolower(phrase[i]);
  }

  for (int i = 0; i < strLength; i++) {
    for (int j = i + 1; j < strLength; j++) {
      if(isalpha(str[j])) {
        if (str[i] == str[j]) {
          return false;
        }
      }
    }
  }

  return true;
}