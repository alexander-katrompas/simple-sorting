
#ifndef SORT_FUNCTIONS_H
#define SORT_FUNCTIONS_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>     /* cout, endl */

using std::cout;
using std::endl;

void swap(int*, int*);
int rand_between(int, int);
int minValue(const int*, const int);
int minIndex(const int*, const int);
int maxValue(const int*, const int);
int maxIndex(const int*, const int);
int getRandValue(const int*, const int);
int searchArray(const int*, const int, int);
void bubblesort(int*, const int);
void selectionsort(int*, const int);
void print_array(const int*, int);

#endif /* SORT_FUNCTIONS_H */
