#include "holberton.h"

/**
 * puts_half - Print half of a string
 * @str: Pointer to string
 */

void puts_half(char *str)
{
	int size, i;

	for (size = 0; str[size] != 0; size++)
		;
	for (i = size / 2; i < size; i++)
		_putchar(str[i]);
	_putchar(10);
}
