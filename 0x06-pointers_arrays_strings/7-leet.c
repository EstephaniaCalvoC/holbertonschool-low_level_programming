#include "holberton.h"
/**
 * leet - Encode a string into 1337
 * @s: string to change
 * Return: 0 is success
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aeotlAEOTL";
	char n[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; l[j] != '\0'; j++)
			if (s[i] == l[j])
				s[i] = n[j];
	return (s);
}
