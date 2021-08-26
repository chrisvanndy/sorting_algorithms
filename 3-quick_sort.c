#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
int partition(int *arr, int l, int r, size_t size)
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
            if (i != j)
            {
                print_array(arr, size);
            }
        }       
    }
    swap(&arr[i + 1], &arr[r]);
    if (i + 1 != r)
    {
        print_array(arr, size);
    }
    return (i + 1);
}
void quicksort(int *arr, int l, int r, size_t size)
{
    int i;
    if (l >= r)
        return;

    i = partition(arr, l, r, size);
    
    
    quicksort(arr, l, i - 1, size);
    
    quicksort(arr, i + 1, r, size);
    
}
void quick_sort(int *array, size_t size)
{
    if (!array)
        return;
    
    quicksort(array, 0, size - 1, size);
     
}