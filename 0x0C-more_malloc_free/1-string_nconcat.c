#include "holberton.h"
#include <stdlib>

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
 * string_nconcat - concatenates two strings untill the n first letters
 * of string 2.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Number of characters of string 2.
 * Return: Pointer shall point to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcatn = NULL;
	int size1;

	/*Convert null strings to empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Allocate memory*/
	size1 = strlen(s1);

	strcatn = malloc(sizeof(char) * (size1 + n + 1));

	if (strcatn == NULL)
		return (NULL);

	/*Concatenate*/
	for (i = 0; s1[i] != '\0'; i++)
		strcatn[i] = s1[i];

	for (i = 0; (i < n) || (s2[i] != '\0'); i++)
		strcatn[i + size1] = s2[i];

	strcatn[i] = '\0';

	return (strcatn);
}
