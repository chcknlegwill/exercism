#include "dnd_character.h"
#include <stdio.h>
#include <math.h> //for rounding down to get modifier
#include <stdlib.h> //for randomness

int ability(void) {

  int rolls[4];
  for(int i = 0; i < 4; i++) {
    rolls[i] = rand() % 6 +1;
    //populate with random
  }
  int min = rolls[0];
  for(int i = 1; i < 4; i++) {
    if(rolls[i] < min) {
      min = rolls[i];
    }
  }
  
  int sum = 0;
  for(int i = 0; i < 4; i++) {
    sum += rolls[i];
  }
  return sum - min;

}

int modifier(int score){
  double a = (score - 10) / 2.0; //make sure dividor(?) is also a double (2 -> 2.0)
  return floor(a);
}


dnd_character_t make_dnd_character(void) {
  dnd_character_t character;
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = 10 + modifier(character.constitution);
  return character;
}
