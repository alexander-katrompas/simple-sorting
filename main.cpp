
#include "main.h"

int main() {
    srand(time(NULL));  // do this only once per application
    
    // this is a static allocation of an array of ints
    int iarray[SIZE];

    // fill iarray with random numbers
    for(int i = 0; i<SIZE; i++){
        iarray[i] = rand_between(MIN,MAX);
    }
    
    // prove it
    print_array(iarray, SIZE);

    //search array
    int value = getRandValue(iarray, SIZE);
    cout << "finding " << value << "... found at " << searchArray(iarray, SIZE, value) << endl;

    //find min and max value of an array
    cout << "The minimum value is " << minValue(iarray, SIZE) << " found at index " << minIndex(iarray, SIZE) << endl;
    cout << "The maximum value is " << maxValue(iarray, SIZE) << " found at index " << maxIndex(iarray, SIZE) << endl;
    cout << endl;

    // sort the array with bubble sort
    bubblesort(iarray, SIZE);
    
    // prove it
    print_array(iarray, SIZE);

    // fill iarray with random numbers again
    for(int i = 0; i<SIZE; i++){
        iarray[i] = rand_between(MIN,MAX);
    }
    
    // prove it
    print_array(iarray, SIZE);

    // sort the array with selection
    selectionsort(iarray, SIZE);
    
    // prove it
    print_array(iarray, SIZE);
   
    return 0;
}
