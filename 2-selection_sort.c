#include "sort.h"

/**
 * selection_sort - sorts integers in ascending order
 * @array: array of integers
 * @size: size of the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, tmp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		tmp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = tmp;

		if (min_idx != i)
			print_array(array, size);
	}
}
