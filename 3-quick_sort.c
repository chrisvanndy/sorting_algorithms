#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap - swap function
 * @i: first int
 * @j: second int
 * Return: returns void
 */
void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}
/**
 * partition - partitions array for sorting
 * @arr: array to partition
 * @l: low integer
 * @r: high integer
 * @size: size of the array
 * Return: returns int
 */
int partition(int *arr, int l, int r, size_t size)
{
	int pivot = arr[r];
	int i = l - 1;
	int j;

	for (j = l; j < r; j++)
	{
		if (arr[j] <= pivot)
		{
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
/**
 * quicksort - quick sorts an array recursively
 * @arr: array to quick sort
 * @l: low int
 * @r: high int
 * @size: size of the array
 * Return: returns void
 */
void quicksort(int *arr, int l, int r, size_t size)
{
	int i;

	if (l >= r)
		return;
	i = partition(arr, l, r, size);
	quicksort(arr, l, i - 1, size);
	quicksort(arr, i + 1, r, size);
}
/**
 * quick_sort - quick sorts an array recursively
 * @array: array to quick sort
 * @size: size of the array
 * Return: returns void
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	quicksort(array, 0, size - 1, size);
}
