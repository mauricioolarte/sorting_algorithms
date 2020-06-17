#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *partition - this is the pivot of quick sort.
 *@A: is the pointer to array to sort.
 *@p: is the low part of pivot.
 *@r: is the position of pivot.
 *@size: is the size of the array.
 *Return: i, position of pivot.
 */
int partition(int *A, int p, int r, size_t size)
{

	int tmp, pivot, j;
	int i;

	pivot = A[r];
	i = p;
	for (j = p; j <= r; j++)
	{
		if (A[j] < pivot)
		{
			if (A[i] != A[j])
			{
				tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
				print_array(A, size);
			}
			i++;
		}
	}
	if (A[i] != A[r])
	{
		tmp = A[i];
		A[i] = A[r];
		A[r] = tmp;
		print_array(A, size);
	}

	return (i);
}

/**
 *quicksort - sort a array of integer.
 *@A: is the pointer to array to sort.
 *@p: is the low part of pivot.
 *@r: is the position of pivot.
 *@size: is the size of the array.
 */

void quicksort(int *A, int p, int r, size_t size)
{
	int q;

	if (p < r)
	{
		q = partition(A, p, r, size);
		quicksort(A, p, q - 1, size);
		quicksort(A, q + 1, r, size);
	}
}

/**
 *quick_sort - sort a array of integer.
 *@array: is the pointer to array to sort.
 *@size: is the size of the array.
 */

void quick_sort(int *array, size_t size)
{
	int r;

	r = size - 1;
	quicksort(array, 0, r, size);
}
