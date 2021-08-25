#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void quick_sort(int *array, size_t size)
{
    size_t arrlen = sizeof(array) / sizeof(size);
    if (!array)
        return;
    
    quicksort(array, 0, size - 1, size);
     
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
    int j;
    for (j = l; j < r; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;    
        }
    }
    swap(&arr[i], &arr[r]);
    
    return i;
}

void quicksort(int *arr, int l, int r, size_t size)
{
    int i;
    if (l >= r)
        return;

    i = partition(arr, l, r);
    
    
    quicksort(arr, l, i - 1, size);
    print_array(arr, sizeof(arr) + 2);
    quicksort(arr, i + 1, r, size);
    
}