#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers.
 * @a: Pointer to array
 * @n: Number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
