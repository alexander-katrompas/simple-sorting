/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Demonstration Code
*  Purpose: A demonstration of searching, sorting.
************************************************* */

#include "functions.h"

int randBetween(int n1, int n2) {
    /* **********************************
     * Generates a random number between n1 and n2
     * order does not matter, but n1 and n2 must be
     * positive and not equal to each other.
     *
     * @param (int) n1 : one bound
     * @param (int) n2 : other bound
     * @return (int) n : random number n1 to n2
     * @exception na : na
     * @note na
     * **********************************/
    int n = 0;
    if (n1 > n2) {
        swap(&n1, &n2);
    }
    if (n1 >= 0 && n2 >= 0 && n1 != n2) {
        n = (rand() % (n2 - n1)) + n1;
    }
    return n;
}

void printArray(const int *arr, const int SIZE){
    /* **********************************
     * Prints an array.
     *
     * @param (int*) arr : the array
     * @param (int) SIZE : the size of the array
     * @return (int) na : na
     * @exception na : na
     * @note na
     * **********************************/
     for(int i = 0; i<SIZE; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

void swap(int *n1, int *n2) {

    /* **********************************
     * swaps two integers
     *
     * @param (int*) n1 : first integer
     * @param (int*) n2 : second integer
     * @return na : na
     * @exception na : na
     * @note the de-refernce of a pointer is the value pointed to
     * **********************************/

    // Instructional Comment: assign the de-reference of n1 to temp
    int temp = *n1;
    // Instructional Comment: assign the de-reference of n2 to the de-reference of n1
    *n1 = *n2;
    // Instructional Comment: assign temp to the de-reference of n1
    *n2 = temp;
}

int getRandValue(const int *array, const int SIZE){
    /* **********************************
     * gets a random value (inclusive) from an integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return (int) : an element from the array
     * @exception na : na
     * @note na
     * **********************************/
    return array[randBetween(0, SIZE-1)];
}

int linearSearch(const int *array, const int SIZE, int value){
    /* **********************************
     * performs a linear search of an integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @param (int) value : the element to be searched
     * @return (int) index : the location or -1 if not found
     * @exception na : na
     * @note na
     * **********************************/
    int index = -1;
    for(int i = 0; i<SIZE && index == -1; i++){
        if(array[i] == value){
            index = i;
        }
    }
    return index;
}

int minValue(const int *array, const int SIZE){
    /* **********************************
     * gets a the minimum value from an integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return (int) : the minimum value
     * @exception na : na
     * @note na
     * **********************************/
    int min = array[0];  // Instructional Comment: priming read
    for(int i = 1; i<SIZE; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int maxValue(const int *array, const int SIZE){
    /* **********************************
     * gets a the maximum value from an integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return (int) : the maximum value
     * @exception na : na
     * @note na
     * **********************************/
    int max = array[0];  // Instructional Comment: priming read
    for(int i = 1; i<SIZE; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int minIndex(const int *array, const int SIZE){
    /* **********************************
     * gets a the index for the minimum value of an integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return (int) : the index of the minimum value
     * @exception na : na
     * @note na
     * **********************************/
    int min = 0;
    for(int i = 1; i<SIZE; i++){
        if(array[i] < array[min]){
            min = i;
        }
    }
    return min;
}

int maxIndex(const int *array, const int SIZE){
    /* **********************************
     * gets a the index for the maximum value of an integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return (int) : the index of the maximum value
     * @exception na : na
     * @note na
     * **********************************/
    int max = 0;
    int i;
    for(i = 1; i<SIZE; i++){
        if(array[i] > array[max]){
            max = i;
        }
    }
    return max;
}

void bubbleSort(int *array, const int size) {
    /* **********************************
     * performs bubble sort for integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return na : na
     * @exception na : na
     * @note na
     * **********************************/
    bool swapped = true; // priming read
    for (int i = 0; i < size - 1 && swapped; i++) { // passes
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Instructional Comment: swap the elements that are out of order
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }
    }
}

void selectionSort(int *array, const int size) { 
    /* **********************************
     * performs selecton sort for integer array
     *
     * @param (int*) array : the array
     * @param (int) SIZE : the size of the array
     * @return na : na
     * @exception na : na
     * @note na
     * **********************************/
    int i, j, minindex; 
    for (i = 0; i < size-1; i++) { 
        minindex = i; 
        for (j = i+1; j < size; j++) {
            if (array[j] < array[minindex]) {
                minindex = j; 
            }
        }
        // Instructional Comment: swap the found minimum element with the first element
        swap(&array[minindex], &array[i]); 
    } 
}


