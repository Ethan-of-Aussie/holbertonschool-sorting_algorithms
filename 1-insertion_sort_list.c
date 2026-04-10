#include "sort.h"
/**
 *swap - Function to swap two elements
 *@xp: First element
 *@yp: Second element
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 *insertion_sort_list - Sorting array with insertion sort algo
 *
 *@list:
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *next, *prev;

	if (!list || !*list || !(*list)->next)
	return;
	cur = (*list)->n;

	while (cur != NULL)
	  {
	    next = cur->next;
	    perv = cur->perv;

	cur = next
	  }
	print_list
}
