#include "holberton.h"

/**
 * print_triangle - Print a triangle in the terminal.
 * @size: numbers of lines.
 */

void print_triangle(int size)
{
	int spc, i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (spc = size - i; spc > 0; spc--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
