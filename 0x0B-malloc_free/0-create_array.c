#include "holberton.h"
#include <stdlib.h>

/**
 * create_array -  Create an array of chars, and initializes it with
 * a specific char.
 * @size: Array's size.
 * @c: Char to fill the array.
 * Return: Array of chars.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
