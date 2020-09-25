#include "holberton.h"

/**
 * print_number - Print a integer numbers.
 */

void print_number(void)
{
	int n, size, j, k, pot;

	n = 3650;

	for (size = 0; nx != 0; size++)
		nx = nx / 10;

	for (j = size - 1; j > 0; j--)
	{
		pot = 1;
		for (k = j; k > 0; k--)
			pot = pot * 10;
		_putchar('0' + ((n / pot) % 10));
	}
	_putchar(n % 10)

	_putchar(10);
}
