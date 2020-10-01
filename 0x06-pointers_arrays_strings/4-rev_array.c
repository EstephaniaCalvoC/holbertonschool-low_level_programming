#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Array.
 * @n: n numbers of elements.
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
