#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 *selection_sort - sort a int array.
 *@array: is a array whit integer.
 *@size: size of array.
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, counter = 0, min_i = 0;
	int min, temp, flag = 0;

	if (size < 2)
		return;

	while (counter < size - 1)
	{
		min = array[counter];
		for (i = 1 + counter; i < size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];

				min_i = i;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			temp = array[counter];
			array[counter] = array[min_i];
			array[min_i] = temp;
			print_array(array, size);
		}
		counter++;
		flag = 0;
	}

}
