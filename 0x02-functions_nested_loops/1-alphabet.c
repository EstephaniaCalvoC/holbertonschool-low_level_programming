#include "holberton.h"

/**
 * print_alphabet - Print the alphabet, in lowercase, followed by new line.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
