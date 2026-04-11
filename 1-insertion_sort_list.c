#include "sort.h"
/**
 *insertion_sort_list - Sorting doubly linked list with
 *insertion sort algorithm
 *
 *@list: The doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur = (*list)->next, *temp;

	if (!list || !*list || !(*list)->next)
	return;

	while (cur)
	{
		temp = cur;
		cur = cur->next;

	while (temp->prev && temp->n < temp->prev->n)
	{
	temp->prev->next = temp->next;

	if (temp->next)
	temp->next->prev = temp->prev;

	temp->next = temp->prev;
	temp->prev = temp->prev->prev;
	temp->next->prev = temp;

	if (temp->prev)
		temp->prev->next = temp;
	else
		*list = temp;
	print_list(*list);
	}
	}
}

