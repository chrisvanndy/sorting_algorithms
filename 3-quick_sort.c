#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void quick_sort(int *array, size_t size)
{
    if (!array)
        return;
    
    quicksort(array, 0, (int)size - 1);
     
}

void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int partition(int *arr, int l, int r)
{
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; ++j) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            ++i;
        }
        
    }
    swap(&arr[i], &arr[r]);
    print_array(arr, sizeof(arr) + 2);
    return i;
}

void quicksort(int *arr, int l, int r)
{
    if (l >= r)
        return;

    int i = partition(arr, l, r);

    quicksort(arr, l, i - 1);
    quicksort(arr, i + 1, r);
}