#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
int partition(int *arr, int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    int j;
    for (j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            if (i != j)
            {
                i++;
            }
            swap(&arr[i], &arr[j]);  
        }
    }
    swap(&arr[i + 1], &arr[r]);
    
    return (i + 1);
}
void quicksort(int *arr, int l, int r, size_t size)
{
    int i;
    if (l >= r)
        return;

    i = partition(arr, l, r);
    
    
    quicksort(arr, l, i - 1, size);
    print_array(arr, size);
    quicksort(arr, i + 1, r, size);
    
    
}
void quick_sort(int *array, size_t size)
{
    if (!array)
        return;
    
    quicksort(array, 0, size - 1, size);
     
}