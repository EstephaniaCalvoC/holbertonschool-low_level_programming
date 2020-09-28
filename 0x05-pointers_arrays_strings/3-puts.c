#include "holberton.h"

/**
 * _puts - description
 * @str: Pointer to string
 */

void _puts(char *str)
{
	_putchar(*str);
	for (; *str++ != 0;)
		_putchar(*str);
	_putchar(10);
}
