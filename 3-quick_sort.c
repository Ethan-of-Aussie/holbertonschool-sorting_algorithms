#include "sort.h"
/**
 *swap - swaps two elements in an array and prints the updated array
 *@a: pointer to the first element to swap
 *@b: pointer to the second element to swap
 *
 *@array: Holds the elements
 *@size: Size of the array
 */
void swap(int *a, int *b, int *array, size_t size)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	print_array(array, size);
}
/**
 *quicksort_recur - Recursive helper for the quicksort algorithm
 *@array: Holds the elements
 *@lo: Starting index of partition
 *@hi: Ending index
 *@size: Size of the array
 */
void quicksort_recur(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
	return;

	p = partition(array, lo, hi, size);
	quicksort_recur(array, lo, p - 1, size);
	quicksort_recur(array, p + 1, hi, size);
}
/**
 *partition - Lomuto scheme used by quicksort
 *@array: Holds the elements
 *@lo: Starting index of partition
 *@hi: Ending index
 *@size: Size of the array
 *
 *Return: The final index ater partitioning
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo;
	int j;

	for (j = lo; j < hi; j++)
	{
	if (array[j] <= pivot)
	{
	if (i != j)
	swap(&array[i], &array[j], array, size);
		i = i + 1;
	}
	}
	if (i != hi)
	swap(&array[i], &array[hi], array, size);
return (i);
}
/**
 *quick_sort - Algorithm to quick sort an array
 *@array: Holds the elements
 *@size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	return;

	quicksort_recur(array, 0, size - 1, size);
}
