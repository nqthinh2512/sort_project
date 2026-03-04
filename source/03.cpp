#include "count_comparison.h"
#include "command.h"
#include "sort_runtime.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    GenerateRandomData(arr, n);
    int count_comparison = shakerSort_count_cmp(arr, n);
    auto time_run = count_runtime(shakerSort, arr, n);
    cout << count_comparison << endl;
    cout << time_run << endl;
    delete[] arr;
    return 0;
}