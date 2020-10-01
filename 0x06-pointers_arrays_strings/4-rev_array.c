#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: Array.
 * @n: n numbers of elements.
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
