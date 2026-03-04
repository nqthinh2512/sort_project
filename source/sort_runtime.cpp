#include "sort_runtime.h"
#include "sorting.h"

duration<double, milli> count_runtime(sortFunction sortFunc, int arr[], int n)
{
    auto start = high_resolution_clock::now();
    sortFunc(arr, n);
    auto end = high_resolution_clock::now();
    duration<double, milli> time_taken = end - start;
    return time_taken;
}