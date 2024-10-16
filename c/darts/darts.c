#include "darts.h"
#include <math.h>
#include <stdio.h>
#include <stdint.h>

uint8_t score(coordinate_t landing_position) {

  float distance = sqrt(landing_position.x * landing_position.x + landing_position.y * landing_position.y);
  int currentScore = 0;
  //works!





/*
 //score
 if(distance > 10 ) {
  currentScore = 0;
 } else if(distance <= 10 ) {
  currentScore = 1;  
 } else if(distance <= 5) {
  currentScore = 5;
 } else :test_exactly_on_center:FAIL: Expected 10 Was 1
distance: 0.141421currentScore: 1./test_darts.c:57ld also just return the score straight rather than storing it in a variable;

*/
  if(distance <= 1) {    //exactly on center first this tim
    return 10;
  } else if(distance <= 5) { //inner circle
    return 5;
  } else if(distance <= 10) {
    return 1;
  } else if(distance > 10) {
    return 0;
  }


 printf("distance: %f\n", distance); 
 printf("currentScore: %d\n", currentScore );

  return currentScore;
}