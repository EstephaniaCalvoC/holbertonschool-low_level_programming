#include "holberton.h"

/**
 * cap_string - Capitalize all words of a string.
 * @s: string
 * Return: Capitalize string
 */

char *cap_string(char *s)
{
	int i, j;

	char sep[] = ", \t\n;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[j] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j]
			     && s[i + 1] != '0'
			     && s[i + 1] >= 'a'
			     && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
