#include "sort.h"
/**
 *swap - Function to swap two elements
 *@xp: First element
 *@yp: Second element
 */
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 *bubble_sort - Sorting array with bubble sort algo
 *
 *@array: The Array of elements
 *@size: Stored Size of the array
 */

void bubble_sort(int *array, size_t size)
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
