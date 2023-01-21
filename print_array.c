#include "sort.h"

/*
 * print_array - print an array of integers
 * @array: the array ro be printed
 * @size: size of the @array
 */

void print_array(const int *array, size_t size)
{
	size_t i = 0;

	while(array && i < size)
	{
		if(i > 0)
		{
			printf(", ");
		}
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}			
