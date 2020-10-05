#include "holberton.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: String.
 * @accept: Characters to accept.
 * Return: The number of bytes  in the initial segment of s which consist only
 *of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int l, i;

	for (l = 0; s[l]; l++)
	{
		for (i = 0; accept[i]; i++)
		{

			if (s[l] == accept[i])
				break;
		}

		if (!accept[i])
			break;
	}

	return (l);
}
