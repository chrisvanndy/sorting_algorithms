#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/** 
 * bubble_sort - sorts members in an array pair by pair
 * @size: the size of the array being sorted
 * @array: the array being passed
 * Return: int 0
 */
 
 void bubble_sort(int *array, size_t size)
 {
    size_t i, j, temp;

    if (array != NULL)
    {
      for (i = 0; i < (size -1); i++)
      {
        for (j = 0; j < (size - i - 1); j++)
        {
          if (array[j] > array[j + 1])
          {
            /* could make a function for this */
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            print_array(array, size);
          }
        }
      }
    }
 } 
