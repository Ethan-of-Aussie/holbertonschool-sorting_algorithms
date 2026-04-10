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

insertion_sort_list(listint_t **list);
{
	size_t i = 0, j = 0;
	bool swapped;

	while (i < size - 1)
	{
		swapped = false;
		j = 0;
	while (j < size - i - 1)
		{
	if (array[j] > array[j + 1])
		{
		swap(&array[j], &array[j + 1]);
		print_array(array, size);
		swapped = true;
		}
	j++;
	}
		if (swapped == false)
		break;
		i++;
	}

}
