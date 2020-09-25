#include "holberton.h"

/**
 * print_number - Print a integer numbers.
 * @n: number.
 *
 */

void print_number(int n)
{
	unsigned int nx;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	nx = n;

	if (n < 10)
		_putchar('0' + n);
	else
	{
		print_number(nx / 10);
		_putchar('0' + (nx % 10));
	}
}
