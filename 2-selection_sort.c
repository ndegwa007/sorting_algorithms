#include "sort.h"

/**
 * swappy - swaps integers
 * @x: first integer
 * @y: second integer
 *
 * Return: nothing
 */

void swappy(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sorts integers in ascending order
 * @array: array of integers
 * @size: size of the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

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
		swappy(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
