#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - Reverse a string
 * @s: Pointer to string
 */

void rev_string(char *s)
{
	int size, i, l;
	char c;

	for (size = 0; s[size] != '\0'; size++)
		;
	l = size - 1;

	for (i = 0; l >= 0 && i < l; l--, i++)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
	}
}
