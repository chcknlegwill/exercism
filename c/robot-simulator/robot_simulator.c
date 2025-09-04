#include "robot_simulator.h"
#include <stdio.h>
#include <string.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
  robot_status_t robot = {.direction = direction, .position = {.x = x, .y = y}};
  return robot;
}

void robot_move(robot_status_t *robot, const char *commands) {

  int cmdLength = strlen(commands);

  for (int i = 0; i < cmdLength; i++) {
    if (commands[i] == 'R' && robot->direction == DIRECTION_WEST) {
      robot->direction = DIRECTION_DEFAULT;
    } else if (commands[i] == 'R' && robot->direction != DIRECTION_WEST) {
      robot->direction++;
    }

    if (commands[i] == 'L' && robot->direction == DIRECTION_NORTH) {
      robot->direction = DIRECTION_WEST;
    } else if (commands[i] == 'L') {
      robot->direction--;
    }

    if (commands[i] == 'A' && robot->direction == DIRECTION_NORTH) {
      robot->position.y++;
    }   
    if (commands[i] == 'A' && robot->direction == DIRECTION_SOUTH) {
      robot->position.y--;
    }   
    if (commands[i] == 'A' && robot->direction == DIRECTION_EAST) {
      robot->position.x++;
    }  
    if (commands[i] == 'A' && robot->direction == DIRECTION_WEST) {
      robot->position.x--;
    }
  }
}
