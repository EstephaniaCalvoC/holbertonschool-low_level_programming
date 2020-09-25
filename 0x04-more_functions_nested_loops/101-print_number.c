#include "holberton.h"

/**
 * print_number - Print a integer numbers.
 * @n: number.
 *
 */

void print_number(int n)
{
	unsigned int nx;

	nx = n

	if (nx < 0)
	{
		_putchar(45);
		nx = nx * -1;
	}

	if (nx < 10)
		_putchar('0' + nx);
	else
	{
		print_number(nx / 10);
		_putchar('0' + (nx % 10));
	}
}
