
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
