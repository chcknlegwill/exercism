#include "binary_search.h"
#include "stdio.h"
#include <stdio.h>
#include <string.h>


//Use merge sort & then binary search through that.

//added some basic stuff to make sure the functions are working - will finish this tmrw.
//sort the list first

#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length) {
    if (arr == NULL || length == 0) {
        return NULL;
    }

  return NULL;
}

const int *merge_sort(int *arr, size_t length) {
  if (arr == NULL || length == 0) {
    return NULL;
  }
  printf("");
}


const int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  size_t length = sizeof(arr) / sizeof(arr[0]);
  
  printf("Original array: ");
  for (size_t i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  merge_sort(arr, length);
  printf("\n");

  int search_value = 25;
  const int *result = binary_search(search_value, arr, length);

  if (result != NULL) {
    printf("Value %d found a index %ld\n", search_value, result - arr);
  } else {
    printf("Value %d was not found in the array\n", search_value);
  }
  return 0;
}

