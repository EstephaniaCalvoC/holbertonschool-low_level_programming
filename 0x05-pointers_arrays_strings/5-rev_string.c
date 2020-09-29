#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - Reverse a string
 * @s: Pointer to string
 */

void rev_string(char *s)
{
	int size, i;

	for (size = 0; s[size] != '\0'; size++)
		;

	char c;

	for (i = 0, size -= 1; size >= 0; size--)
	{
		c = s[i];
		s[i] = s[size];
		s[size] = c;
		i++;
	}
}
