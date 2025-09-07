#include "space_age.h"
#include <stdio.h>


float age(planet_t planet, int64_t seconds) {
  //Given an age in seconds, calculate how old someone would be on a planet in our Solar System.

// --- orbital period ---
//  Mercury 	0.2408467
//  Venus 	  0.61519726
//  Earth 	  1.0
//  Mars 	    1.8808158
//  Jupiter 	11.862615
//  Saturn 	  29.447498
//  Uranus 	  84.016846
//  Neptune 	164.79132


  //printf("planet: %d\n", planet);
  //printf("seconds: %ld\n", seconds);

  int64_t earthYearInSeconds = 31557600;
  //if planet is invalid
  if(planet > 7 || planet < 0) {
    return -1;
  }

  //Earth
  if(planet == 2 || planet == EARTH) {
    seconds = seconds / earthYearInSeconds;
    return seconds;
  }

  //rest of planets in-order now...
  //Mercury
  if(planet == 0 || planet == MERCURY) {
    float mercuryYearInSeconds = earthYearInSeconds * 0.2408467;
    mercuryYearInSeconds = seconds / mercuryYearInSeconds;
    return mercuryYearInSeconds;
  }
  //Venus 	  0.61519726
  if(planet == 1 || planet == VENUS) {
    float venusYearInSeconds = earthYearInSeconds * 0.61519726;
    venusYearInSeconds = seconds / venusYearInSeconds;
    return venusYearInSeconds;

  }

  // Mars 	  1.8808158
  if(planet == 3 || planet == MARS) {
    float marsYearInSeconds = earthYearInSeconds * 1.8808158;
    marsYearInSeconds = seconds / marsYearInSeconds;
    return marsYearInSeconds;
  }

  //Jupiter 	11.862615
  if(planet == 4 || planet == JUPITER) {
    float jupiterYearInSeconds = earthYearInSeconds * 11.862615;
    jupiterYearInSeconds = seconds / jupiterYearInSeconds;
    return jupiterYearInSeconds;
  }

  //Saturn 	  29.447498
  if(planet == 5 || planet == JUPITER) {
    float saturnYearInSeconds = earthYearInSeconds * 29.447498;
    saturnYearInSeconds = seconds / saturnYearInSeconds;
    return saturnYearInSeconds;
  }

  //Uranus 	  84.016846
  if(planet == 6 || planet == URANUS) {
    float uranusYearInSeconds = earthYearInSeconds * 84.016846;
    uranusYearInSeconds = seconds / uranusYearInSeconds;
    return uranusYearInSeconds;
  }
  //Neptune 	164.79132
  if(planet == 7 || planet == NEPTUNE){
    float neptuneYearInSeconds = earthYearInSeconds * 164.79132;
    neptuneYearInSeconds = seconds / neptuneYearInSeconds;
    return neptuneYearInSeconds;
  }

  return 0.0;
}