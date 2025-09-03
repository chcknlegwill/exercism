#include "robot_simulator.h"
#include <stdio.h>
#include <string.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
  robot_status_t robot = {.direction = direction, .position = {.x = x, .y = y}};
  return robot;
}

void robot_move(robot_status_t *robot, const char *commands) {
  //robot->position.x = robot->position.x;
  printf("Initial position: (%d, %d), Direction: %d\n", robot->position.x, robot->position.y, robot->direction);
  printf("commands = %s\n", commands);
  int bruh = strlen(commands);
  printf("num of commands: %d\n", bruh);
  // need to get individual commands e.g. command

  for (int i = 0; i < bruh; i++) {
    //printf("i = %d \n", i);
    //printf("bruh2: %d\n", commands[i]);
    if (commands[i] == 'R' && robot->direction == DIRECTION_WEST) {
      robot->direction = DIRECTION_DEFAULT;
    } else if (commands[i] == 'R' && robot->direction != DIRECTION_WEST) {
      robot->direction++;
    }
  }

}
