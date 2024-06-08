/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Demonstration Code
*  Purpose: A demonstration of searching, sorting.
************************************************* */

#include "main.h"

int main() {
    /* **********************************
     * This function is the application driver. It uses
     * and tests the functions modules.
     *
     * @param na : na
     * @return (int) : application exit code
     * @exception na : na
     * @note na
     * **********************************/
 
    // Instructional Comment: do this only once per application.
    srand(time(NULL));
    
    // Instructional Comment: this is a static allocation of an array of ints
    int iarray[SIZE];

    // Instructional Comment: fill iarray with random numbers
    for(int i = 0; i<SIZE; i++){
        iarray[i] = randBetween(MIN,MAX);
    }
    printArray(iarray, SIZE);

    // Instructional Comment: search array
    int value = getRandValue(iarray, SIZE);
    cout << "finding " << value << "... found at " << linearSearch(iarray, SIZE, value) << endl;

    // Instructional Comment: find min and max value of an array
    cout << "The minimum value is " << minValue(iarray, SIZE) << " found at index " << minIndex(iarray, SIZE) << endl;
    cout << "The maximum value is " << maxValue(iarray, SIZE) << " found at index " << maxIndex(iarray, SIZE) << endl;
    cout << endl;

    // Instructional Comment: sort the array with bubble sort
    bubbleSort(iarray, SIZE);
    printArray(iarray, SIZE);

    // Instructional Comment: fill iarray with random numbers again
    for(int i = 0; i<SIZE; i++){
        iarray[i] = randBetween(MIN,MAX);
    }
    printArray(iarray, SIZE);

    // Instructional Comment: sort the array with selection
    selectionSort(iarray, SIZE);
    printArray(iarray, SIZE);

    return 0;
}
