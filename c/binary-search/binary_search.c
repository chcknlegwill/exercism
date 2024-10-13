#include "binary_search.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


//Use merge sort & then binary search through that.

//added some basic stuff to make sure the functions are working - will finish this tmrw.
//sort the list first

#include "binary_search.h"

/*
going to implement bubble sort for first iteration
*/

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}

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
  int arr[] = { 1, 9, 4, 6, 8, 9, 11 };
  int n = sizeof(arr) / sizeof(arr[0]);
  size_t length = sizeof(arr) / sizeof(arr[0]);
  int value = 6;


  printf("Unsorted array: ");
  print_array(arr, length);
  bubbleSort(arr, n);
  printf("Sorted array :");
  print_array(arr, length);

}