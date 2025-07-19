#include "binary_search.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//Thanks to siebenschlaefer for advice / mentoring to improve this solution. 
//^Made additional changes using a half-open interval  

//Did not need the bubble sort
//Time-complexity: O(log n).
//Space-complexity O(n).
const int* binary_search(int value, const int* arr, size_t length) {
  //For empty arrays:
  if (length == 0 ) {
    return NULL;
  }


  //binary search - size_t = unsigned long
  size_t left = 0;
  size_t right = length - 1;

  while (left <= right) {
    size_t mid = left + (right - left) / 2;
    if (arr[mid] == value) {
      return &arr[mid];
    }
    if(arr[mid] < value) {
      left = mid + 1;
    } else {
      if (mid == 0) {
        return NULL; // to pass the 8th & 11th tests
      }
      right = mid - 1;
    }
  }
  return NULL;
}
