#include "sort.h"

/**
 * bubble_sort - sort an array
 * @array: array that gets sorted
 * @size: size of the @array
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
