#include "binary_search.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//Thanks to siebenschlaefer for advice / mentoring to improve this solution. 
//^Made additional changes using a half-open interval  

//Did not need the bubble sort
//Time-complexirty: O(log n).
//Space-complexity O(n).
const int* binary_search(int value, const int* arr, size_t length) {
//still works without the if statement here;
//comment about the changes in the morning.


    //binary search - size_t = uinsigned long
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
        right = mid; //don't need to add - 1 anymore 
      }
    }
    return NULL;
}

void print_array(const int arr[], size_t length) {
  for (size_t i = 0; i < length; i++) {
    printf("%d, ", arr[i]);

  }
  printf("\n");
}



/*
int main() { //uncomment the func before for debugging 
  //ARRAYS ARE ALL SORTED BEFORE USE!!!!!!
  //need to sort the array first
  int arr[] = { 1, 3, 4, 6, 8, 9, 11 };
  int n = sizeof(arr) / sizeof(arr[0]);
  size_t length = sizeof(arr) / sizeof(arr[0]);
  int value = 6;

  const int* result = binary_search(value, arr, length);

  printf("Original array after search (unchanged): ");
  print_array(arr, length);

  if(result != NULL) {
    printf("Value %d found at %ld\n", value, result - arr);
  } else {
    printf("Value %d not found in the array.\n", value);
  }

  int arr2[] = {1,4,6,7,8,9,12};
  int n2  = sizeof(arr2) / sizeof(arr2[0]);
  size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
  int value2 = 12; 

  const int* result2 = binary_search(value2, arr2, length2);

  printf("Original array after search (unchanged): ");
  print_array(arr2, length);

  if(result2 != NULL) {
    printf("Value %d found at %ld\n", value2, result2 - arr2);
  } else {
    printf("Value %d not found in the array.\n", value2);
  }


}
*/
