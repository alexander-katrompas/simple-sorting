/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Demonstration Code
*  Purpose: A demonstration of searching, sorting.
************************************************* */

#ifndef SORT_FUNCTIONS_H
#define SORT_FUNCTIONS_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>     /* cout, endl */

using std::cout;
using std::endl;

void swap(int*, int*);
int randBetween(int, int);
int minValue(const int*, const int);
int minIndex(const int*, const int);
int maxValue(const int*, const int);
int maxIndex(const int*, const int);
int getRandValue(const int*, const int);
int linearSearch(const int*, const int, int);
void bubbleSort(int*, const int);
void selectionSort(int*, const int);
void printArray(const int*, int);

#endif /* SORT_FUNCTIONS_H */
