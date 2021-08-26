#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - sorting algorithm using insertion sort method
 * @list: list to sort
 * Return: void return, returns nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next = NULL;

	if (list == NULL)
	{
		return;
	}

	current = *list;
	next = current->next;

	if (current != NULL && current->next != NULL)
	{
		if (current->n < next->n)
		{
			if (next->next)
			{
				current->next = next->next;
				next->next = current;
			}
		}
	}
}
