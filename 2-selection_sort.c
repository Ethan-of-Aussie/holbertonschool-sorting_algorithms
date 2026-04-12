#include "sort.h"
/**
 *swap - Function to swap two elements
 *@x: First element
 *@y: Second element
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 *selection_sort - Sorting array with Selection sort algo
 *
 *@array: The Array of elements
 *@size: Stored Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;

	for (i = 0; i < size - 1; i++)
		{
		min = i;
		for (j = i + 1; j < size; j++)
		{
		if (array[j] < array[min])
		min = j;
		}
	if (min != i)
	{
	swap(&array[i], &array[min]);
	print_array(array, size);
	}
}
}
