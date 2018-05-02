#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>
#include <vector>
#include "utilities.hpp"

void quickSort(std::vector<int>& arr);
void quickSort(std::vector<int>& arr, int low, int high);
int partition(std::vector<int>& arr, int low, int high, int pivotValue);
#endif
