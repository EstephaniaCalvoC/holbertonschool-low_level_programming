#include "stdio.h"

/**
 * print_to_98 - description
 * @n: number
 */

void print_to_98(int n)
{
	for (; n > 98; n--)
		printf("%d, ", n);
	for (; n < 98; n++)
		printf("%d, ", n);
	printf("98\n");
}
