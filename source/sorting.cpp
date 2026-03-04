#include "sorting.h"

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIdx] > arr[j])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

void shakerSort(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int k = 0;
    while (left < right)
    {
        for (int i = left; i < right; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                k = i;
            }
        }
        right = k;
        for (int i = right; i > left; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
                k = i;
            }
        }
        left = k;
    }
}

int sortFirstMiddleLast(int arr[], int first, int last)
{
    int mid = (first + last) / 2;
    if (arr[first] > arr[mid])
        swap(arr[first], arr[mid]);
    if (arr[mid] > arr[last])
        swap(arr[mid], arr[last]);
    if (arr[first] > arr[mid])
        swap(arr[first], arr[mid]);
    return mid;
}

int partition(int arr[], int first, int last)
{
    int pivotIndex = sortFirstMiddleLast(arr, first, last);
    swap(arr[pivotIndex], arr[last - 1]);
    pivotIndex = last - 1;
    int pivot = arr[pivotIndex];

    int indexFromLeft = first + 1;
    int indexFromRight = last - 2;
    bool done = false;

    while (!done)
    {
        while (arr[indexFromLeft] < pivot)
            indexFromLeft++;
        while (arr[indexFromRight] > pivot)
            indexFromRight--;
        if (indexFromLeft > indexFromRight)
            done = true;
        else
        {
            swap(arr[indexFromRight], arr[indexFromLeft]);
            indexFromRight--, indexFromLeft++;
        }
    }

    swap(arr[indexFromLeft], arr[pivotIndex]);
    return indexFromLeft;
}

void quickSort(int arr[], int first, int last)
{
    if (last - first == 1)
    {
        if (arr[first] > arr[last])
        {
            swap(arr[first], arr[last]);
        }
        return;
    }
    if (first < last)
    {
        int pivotIndex = partition(arr, first, last);
        quickSort(arr, first, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, last);
    }
}