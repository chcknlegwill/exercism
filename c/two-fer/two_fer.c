#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name) {
    //printf("%s ", name);
    if (name == NULL) {
      sprintf(buffer, "One for you, one for me.");
    } else {
      sprintf(buffer, "One for %s, one for me.", name);
    }
    //sprintf writes to the buffer & solves the buffer not being
    //used issue in the tests (& compiler).
}
 /*
int main() {
  two_fer("sunday", "bruh");

  return 0;
}
*/

