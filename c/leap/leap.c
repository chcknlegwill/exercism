#include "leap.h"
#include <stdbool.h>
#include <stdio.h>

bool leap_year(int year) { 

  if(year % 400 == 0) {
    return true;
  } else if (year % 100 == 0){
    return false;
  } else if(year % 4 == 0) {
    return true;
  } else {
    return false;
  }
} 
