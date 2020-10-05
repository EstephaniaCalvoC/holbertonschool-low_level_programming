#include "holberton.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: String.
 * @accept: Characters to accept.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int l, i;

	for (l = 0; s[l]; l++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[l] == accept[i])
				return (&s[l]);
		}
	}
	return (0);
}
