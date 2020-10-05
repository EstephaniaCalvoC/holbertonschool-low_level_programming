#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Pointer to matrix.
 * @size: Matrix size.
 */

void print_diagsums(int *a, int size)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < size; i++)
		sum += a[(size + 1) * i];
	printf("%d, ", sum);

	sum = 0;

	for (i = 1 ; i <= size; i++)
		sum += a[(size - 1) * i];
	printf("%d\n", sum);
}
