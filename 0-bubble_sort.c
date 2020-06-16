#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *bubble_sort - this function sort a array.
 *@array: array whit integer to sort.
 *@size: size of array.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int count = 1, temp, i;

	if (size <= 2)
		return;
	while (count)
	{
		count = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				count++;
				print_array(array, size);
			}
		}
	}


}
