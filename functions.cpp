
#include "functions.h"

/* Generates a random number between n1 and n2
 * order does not matter
 * n1 and n2 must be positive */
int rand_between(int n1, int n2) {
    int n = 0;
    if (n1 > n2) {
        swap(&n1, &n2);
    }
    if (n1 >= 0 && n2 >= 0 && n1 != n2) {
        n = (rand() % (n2 - n1)) + n1;
    }
    return n;
}

void print_array(int *arr, const int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}


// swaps two integers
void swap(int *n1, int *n2) {
    // the derefernce of a pointer is the value pointed to

    // assign the de-reference of n1 to temp
    int temp = *n1;
    // assign the de-reference of n2 to the de-reference of n1
    *n1 = *n2;
    // assign temp to the de-reference of n1
    *n2 = temp;
}

// bubble sort for integer array
void bubblesort(int *array, const int size) {
    bool swapped = true;
    for (int i = 0; i < size - 1 && swapped; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // swap the elements that are out of order
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }
    }
}

// selecton sort for integer array
void selectionsort(int *array, const int size) { 
    int i, j, minindex; 
    for (i = 0; i < size-1; i++) { 
        minindex = i; 
        for (j = i+1; j < size; j++) {
            if (array[j] < array[minindex]) {
                minindex = j; 
            }
        }
        // swap the found minimum element with the first element
        swap(&array[minindex], &array[i]); 
    } 
} 

