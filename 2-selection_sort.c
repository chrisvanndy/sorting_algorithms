#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* selection_sort - selection sort based algorithm
* @array: array to sort
* @size: size of the array
* Return: void return
*/
void selection_sort(int *array, size_t size)
{
	size_t pos;
    /* size_t temp; */
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{

			if (array[j] < array[pos])
			{
				pos = j;
			}
		}
		if (pos != i)
		{
			swap(&array[pos], &array[i]);
			print_array(array, size);
		}
	}
}
/**
 * swap - swap function
 * @x: first int
 * @y: second int
 * Return: returns void
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
