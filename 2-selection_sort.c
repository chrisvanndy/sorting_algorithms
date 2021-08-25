#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t min;
    /* size_t min2; */
	size_t i, j;

	for (i = 0; i < size-1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if(array[j] < array[min])
			{
                min = j;
			    /* min2 = j; */
				swap(&array[min], &array[i]);
			}
		}
        print_array(array, size);
	}
    
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}