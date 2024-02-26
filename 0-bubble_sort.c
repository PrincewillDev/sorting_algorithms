#include "sort.h"

/**
 * bubble_sort - This function uses bubble sort algorithm to sort an array
 * @array: This is the array to be sorted
 * @size: the size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, k, temp, swapped = 0;

	if (size < 2 || array == NULL)
	{
		return;
	}

	for (k = 0; k < size - 1; k++)
	{
		for (i = 0; i < size - 1 - k; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped++;
				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			return;
		}
	}

}
