#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name) {
    printf("%s", buffer);
    printf("%s ", name);
}