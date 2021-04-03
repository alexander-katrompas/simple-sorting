
#ifndef SORT_FUNCTIONS_H
#define SORT_FUNCTIONS_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>     /* cout, endl */

using std::cout;
using std::endl;

void swap(int*, int*);
int rand_between(int, int);
void bubblesort(int*, const int);
void selectionsort(int*, const int);
void print_array(int*, const int);

#endif /* SORT_FUNCTIONS_H */
