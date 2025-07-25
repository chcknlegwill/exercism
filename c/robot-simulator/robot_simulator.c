#include "robot_simulator.h"
#include <stdio.h>
#include <string.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
  robot_status_t robot = { .direction = direction, .position = { .x = x, .y = y } };
  return robot;
}


void robot_move(robot_status_t *robot, const char *commands) {
  robot->position.x = robot->position.x; 
  printf("commands = %s\n", commands);
  int bruh = strlen(commands);
  printf("num of commands: %d\n", bruh);
  for (int i = 0; i < bruh; i++) {
    printf("bruh");
  }
  //running - now I just need to pass the other tests
}