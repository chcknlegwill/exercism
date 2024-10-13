#include "binary_search.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Use merge sort & then binary search through that.

//added some basic stuff to make sure the functions are working - will finish this tmrw.
//sort the list first

#include "binary_search.h"

const int *sort(int value, const int *arr, size_t length) {
  printf("bruh");
  return arr;
}


const int *binary_search(int value, const int *arr, size_t length) {
    if (arr == NULL || length == 0) {
        return NULL;
    }


}

void print_array(const int arr[], size_t length) {
  for (size_t i = 0; i < length; i++) {
    printf("%d, ", arr[i]);

  }
  printf("\n");
}


int main() {
  //need to sort the array first
  int arr[] = { 1, 3, 4, 6, 8, 9, 11 };
  size_t length = sizeof(arr) / sizeof(arr[0]);
  int value = 6;


  printf("Unsorted array: ");
  print_array(arr, length);
  printf("Sorted array :");

}