#include <iostream>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;
using sortFunction = void(*)(int[], int);

duration<double, milli> count_runtime(sortFunction sortFunc, int arr[], int n);