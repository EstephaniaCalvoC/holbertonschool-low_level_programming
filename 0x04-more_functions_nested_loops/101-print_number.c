#include "holberton.h"

/**
 * print_number - Print a integer numbers.
 * @n: number.
 *
 */

void print_number(int n)
{
	int size, nx, j, k, pot;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	nx = n;
	for (size = 0; nx != 0; size++)
		nx = nx / 10;
	for (j = size - 1; j > 0; j--)
	{
		pot = 1;
		for (k = j; k > 0; k--)
			pot = pot * 10;
		_putchar(48 + ((n / pot) % 10));
	}
	_putchar(48 + n % 10);
}
