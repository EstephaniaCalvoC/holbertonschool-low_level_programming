#include "holberton.h"

/**
 * _strstr - Locate a substring.
 * @haystack: String.
 * @needle: Substring to accept.
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, l, c, size;

	for (size = 0; needle[size]; size++)
		;

	for (l = 0; haystack[l]; l++)
	{
		c = 0;

		for (i = 0; needle[i]; i++)
		{
			if (haystack[l + i] == needle[i] &&
			    haystack[l + i] != '\0')
				c++;
			else
			{
				c = 0;
				break;
			}
		}
		if (c == size)
			return (&haystack[l]);
	}
	return (0);
}
