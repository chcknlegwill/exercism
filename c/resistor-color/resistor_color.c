#include "resistor_color.h"
#include <stdio.h>

// Define color constants
#define BLACK 0
#define BROWN 1
#define RED 2
#define ORANGE 3
#define YELLOW 4
#define GREEN 5
#define BLUE 6
#define VIOLET 7
#define GREY 8
#define WHITE 9


resistor_band_t color_code(resistor_band_t band) {
  // declare colors:
  const char* colors[]  = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    printf("color at index is %s \n", colors[band]);
    return band;
  }


/*
  const resistor_band_t colors(void) {
    const resistor_band_t colors[]  = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    return colors;

  }
*/

