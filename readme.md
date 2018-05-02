Quicksort
=========
This is a learning exercise in C++.

The function `quicksort()` is overloaded - either accepting solely the array to sort (first run) or an array to sort with high and low indices.

On the first run, the input parameter consists solely of the array to sort. The array is passed by reference so that any operations take place on the original array.

The array is passed into `quickSort()` again - this time with a low and a high index, and again by reference. The indexes determine the array boundaries over which sorting should take place. For the initial run, the boundaries are 0 for the lower bound index and `array.size() - 1` for the upper - i.e. the entire array. The same function/method name is used - the different functionality is accessed by means of function overloading. The `quickSort()` function calls itself recursively.

The first step in the `quickSort()` function is a check to see if the low index is greater than or equal to the high index. If it is, the function returns; no further sorting is necessary for this partition.

The method then establishes a pivot value which is passed into the `partition()` method along with a reference to the array, and high and low indexes. This method swaps values around the pivot value and returns a new index, corresponding to the pivot position. At this point, values have been sorted either side of the pivot based on whether they are greater than or less than the pivot value. As such, the returned index integer allows us to set bounds for two new partitions:
* One which represents an array of values greater than the pivot value
* One which represents an array of values less than the pivot value

The `quickSort()` method is run for the new lower and higher array partitions.
