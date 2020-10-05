#include "holberton.h"

/**
 * _strchr - Locate a character in a string.
 * @s: String.
 * @c: Character.
 * Return: The firs occuerrence of hte character in the string or NULL.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
			return (&s[i]);

		else if (s[i] == '\0')
			return (0);
	}
}
