#include "binary_search.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Need to declare these variables before to avoid some errors:
static void swap(int* xp, int* yp);
static void bubbleSort(int arr[], int n);

/*
going to implement bubble sort for first iteration
bubble sort working!
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

const int* binary_search(int value, const int* arr, size_t length) {
    if (arr == NULL || length == 0) {
        return NULL;
    }
    
    //now have to sort the array within this function using the bubbleSort function;
    /*bubbleSort(arr, length); <----------- this wouldn't work - kept on getting this error: inary_search.c: In function ‘binary_search’:
binary_search.c:52:16: warning: passing argument 1 of ‘bubbleSort’ discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
   52 |     bubbleSort(arr, length);
      |                ^~~
binary_search.c:27:21: note: expected ‘int *’ but argument is of type ‘const int *’
   27 | void bubbleSort(int arr[], int n){
      |                 ~~~~^~~~~ */
    
    int* temp_arr = malloc(length * sizeof(int));
    if (temp_arr == NULL) {
      return NULL;
    }
    memcpy(temp_arr, arr, length * sizeof(int));

    bubbleSort(temp_arr, length); //sort the temp array to avoid the error above;

    //binary search
    int left = 0;
    int right = length - 1;
    const int* result = NULL;

    while (left <= right) {
      int mid = left + (right - left) / 2;
    
      if (temp_arr[mid] == value) {
        for(size_t i = 0; i < length; i++) {
          if (arr[i] == value) {
            result = &arr[i];
            break;
          }
        }
        break;
      }

      if(temp_arr[mid] < value) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    free(temp_arr);
    return result;
}

/*
void print_array(const int arr[], size_t length) {
  for (size_t i = 0; i < length; i++) {
    printf("%d, ", arr[i]);

  }
  printf("\n");
}

int main() {
  //need to sort the array first
  int arr[] = { 9, 9, 4, 6, 8, 9, 11 };
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
//^WORKING !!!!!!!

  printf("Array #1");
  printf("Unsorted array: ");
  print_array(arr, length);
  bubbleSort(arr, n);
  printf("Sorted array :");
  print_array(arr, length);
  printf("==========================");
  binary_search(value, arr, length);
  printf("\n");



  int arr2[] = {1,4,66,7,8,2,4};
  int n2  = sizeof(arr2) / sizeof(arr2[0]);
  size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
  int value2 = 2; 
  printf("Array #2");
  printf("Unsorted array: ");
  print_array(arr2, length2);
  bubbleSort(arr2, n2);
  printf("Sorted array: ");
  print_array(arr2, length2);
  printf("======================");
  binary_search(value2, arr2, length2);


}
*/