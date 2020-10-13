#include "holberton.h"
#include <stdio.h>

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
 * str_concat - Concatenates two strings
 * @s1: First string.
 * @s2: Second string.
 * Return: String that contains the contents of s1, followe
 * by the contents of s2.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1, size2;
	char *scat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	scat = malloc(sizeof(char) * (size1 + size2 + 1));

	if (scat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		scat[i] = s1[i];
	for (i = 0; s2[i]; i++)
		scat[i + size1] = s2[i];
	scat[i + size1] = '\0';

	return (scat);
}
