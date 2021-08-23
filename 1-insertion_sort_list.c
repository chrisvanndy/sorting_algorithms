#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - 
 * 
 */

void insertion_sort_list(listint_t **list)
{
  listint_t *current = NULL, *next = NULL;
  
  if (list == NULL)
  {
    return;
  }

  current = *list;

  if (current != NULL && current->next != NULL)
  {
    next = current->next;
    if(current->n > next->n)
    {
      if(next->next)
      {
        next->next->prev = current
    

      }
    }
  }


}