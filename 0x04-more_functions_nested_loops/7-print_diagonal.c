#include "holberton.h"

/**
 * print_diagonal - Print a diagonal in the terminal.
 * @n: numbers of lines.
 */

void print_diagonal(int n)
{
	int spc, init = n;

	for (; n > 0; n--)
	{
		for (spc = init - n; spc > 0; spc--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
