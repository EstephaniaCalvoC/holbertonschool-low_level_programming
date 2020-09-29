#include "holberton.h"

/**
 * _puts - description
 * @str: Pointer to string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar(10);
}
