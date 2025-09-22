#include "resistor_color_duo.h"
#include <stdio.h>
#include <string.h>

uint16_t color_code(const resistor_band_t* colors) {
  uint16_t result = colors[0] * 10 + colors[1];

  return result;
}
