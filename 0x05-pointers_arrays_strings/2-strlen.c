#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; (*s++ != 0);)
		c++;

	return (c);
}
