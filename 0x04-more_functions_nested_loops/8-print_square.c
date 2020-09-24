#include "holberton.h"

/**
 * print_square - Print a straight line in the terminal.
 * @size: square size.
 */

void print_square(int size)
{
	int rows = size;

	for (; rows > 0; rows--)
	{
		for (; size > 0; size--)
			_putchar('\#');
		_putchar('\n');
	}

	_putchar('\n');
}
