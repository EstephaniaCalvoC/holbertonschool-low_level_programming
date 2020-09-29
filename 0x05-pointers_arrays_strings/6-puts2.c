#include "holberton.h"

/**
 * puts2 - Print only even position from a string.
 * @str: Pointer to string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
