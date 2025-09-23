#include "high_scores.h"
#include <stdio.h>


int32_t latest(const int32_t *scores, size_t scores_len) {
  //printf("scores: %d\n", *scores);
  //printf("score_len: %ld\n", scores_len);
  size_t latest = scores[scores_len - 1]; 
  return latest;
}


int32_t personal_best(const int32_t *scores, size_t scores_len) {
  //printf("scores: %ls", scores);
  //printf("score_len: %ld", scores_len);
  int highScore = 0;
    for (size_t i = 0; i < scores_len; i++) {
    //printf("score[%ld] = %d\n", i, scores[i]);
    if(scores[i] > highScore) {
      highScore = scores[i];
    }
  }
  return highScore;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
  for (size_t i = 0; i < scores_len; i++) {

    if(scores_len < 3) {
      if(scores_len == 1) {
        output[0] = scores[0];
      } else if (scores_len == 2) {
        if(scores[0] > scores[1]) {
          output[0] = scores[0];
          output[1] = scores[1];
        } else {
          output[0] = scores[1];
          output[1] = scores[0];
        }
      }
      return scores_len;
    }

    //printf("score[%ld] = %d\n", i, scores[i]);
    if (scores[i] > output[0]) {
      output[2] = output[1];
      output[1] = output[0];
      output[0] = scores[i]; 
    } else if (scores[i] > output[1]) {
      output[2] = output[1];
      output[1] = scores[i]; 
    } else if (scores[i] > output[2]) {
      output[2] = scores[i];
    }
  }

  //for (int j = 0; j < 3; j++) {
  //output[j] = output[j];
  //}

 return 3;
}




//for (size_t i = 0; i < scores_len; i++) {
//    printf("score[%ld] = %d\n", i, scores[i]);
//    if(scores[i] > output[i]) {
//      output[0] + 1;
//      output[1] + 1;
//      output[i] = scores[i];
//      printf("inside loop highScore[%ld] = %d\n", i, scores[i]);
//      //output[i] = highScore; smashes stack
//      //for(int j = 0; j < 3; j++) {
//      // output[j] = highScore; 
//      //}
//    } 
//  }
//
