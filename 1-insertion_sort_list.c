#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - sorting algorithm using insertion sort
 * @list: list to sort
 * Return: returns void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next = NULL;

	if (list == NULL)
	{
		return;
	}

	current = *list;

	while (current != NULL && current->next != NULL)
	{
	next = current->next;

	if (current->n > next->n)
	{
		if (next->next)
			next->next->prev = current;

		next->prev = current->prev;

		if (current->prev)
			current->prev->next = next;
		else
			*list = next;

		current->prev = next;
		current->next = next->next;
		next->next = current;
		print_list(*list);
		current = *list;
	}
	else
		current = current->next;
	}
}
