#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>


/**
 * jump_search - Jump search algorithm
 * @array: array of integers.
 * @size: lenght of array.
 * @value: value to search.
 * Return: value or none.
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int jump, i, j;

	if (!array || size <= 0)
		return (-1);

	jump = sqrt(size);
	i = 0;

	while ((array[i] <= value) && (i < size))
	{
		if (array[i] == value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
	i -= jump;
	for (j = 0; j <= jump && i < size; j++, i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
