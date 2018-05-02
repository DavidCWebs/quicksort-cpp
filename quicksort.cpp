#include <iostream>
#include <vector>

#include "utilities.hpp"
#include "quicksort.hpp"

/**
 * Function for the first run - accepts the vector only
 * @param  arr Input Vector for sorting
 */
void quickSort(std::vector<int>& arr)
{
    quickSort(arr, 0, arr.size() - 1);
}

/**
 * Function for subsequent runs.
 */
void quickSort(std::vector<int>& arr, int low, int high)
{
    if (low >= high)
        return;
    int pivotValue = arr[(low + high) / 2];
    // Determine the boundary for the new partitions
    int finalIndex = partition(arr, low, high, pivotValue);
    // The new lower partition
    quickSort(arr, low, finalIndex -1);
    // The new higher partition
    quickSort(arr, finalIndex, high);
}

/**
 * Returns a new pivot point around which to swap if necessary. As part of the
 * process, values are swapped if they are:
 * - Above the pivot point and lower than the pivot value
 * - Below the pivot point and higher than the pivot value
 *
 * @param  arr        Array of values to check/swap
 * @param  low        Starting low index
 * @param  high       Starting high index
 * @param  pivotValue Reference value
 * @return            Return the final `low` index
 */
int partition(std::vector<int>& arr, int low, int high, int pivotValue)
{
    while (low <= high) {
        while (arr[low] < pivotValue) {
            low++;
        }
        while (arr[high] > pivotValue) {
            high--;
        }
        // `low` index has advanced such that it's value is >= `pivotValue`.
        // `high` index has decremented such that it's value is <= `pivotValue`.
        if (low <= high) {
            // Swap values and adjust high/low pointers
            utilities::swap(&arr[low], &arr[high]);
            low++;
            high--;
        }
    }
    return low;
}
