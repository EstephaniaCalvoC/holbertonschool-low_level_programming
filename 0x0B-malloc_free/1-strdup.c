#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */

unsigned int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}

/**
 * _strdup - Create a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String to duplicate.
 * Return: A pointer.
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *dup;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
