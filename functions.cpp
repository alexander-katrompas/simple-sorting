
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

void print_array(const int *arr, const int SIZE){
    for(int i = 0; i<SIZE; i++){
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

int getRandValue(const int *array, const int SIZE){
    return array[rand_between(0, SIZE-1)];
}

int searchArray(const int *array, const int SIZE, int value){
    int index = -1;
    for(int i = 0; i<SIZE && index == -1; i++){
        if(array[i] == value){
            index = i;
        }
    }
    return index;
}

int minValue(const int *array, const int SIZE){
    int min = array[0];  // priming read
    for(int i = 1; i<SIZE; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int maxValue(const int *array, const int SIZE){
    int max = array[0];
    for(int i = 1; i<SIZE; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int minIndex(const int *array, const int SIZE){
    int min = 0;
    for(int i = 1; i<SIZE; i++){
        if(array[i] < array[min]){
            min = i;
        }
    }
    return min;
}

int maxIndex(const int *array, const int SIZE){
    int max = 0;
    int i;
    for(i = 1; i<SIZE; i++){
        if(array[i] > array[max]){
            max = i;
        }
    }
    return max;
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


