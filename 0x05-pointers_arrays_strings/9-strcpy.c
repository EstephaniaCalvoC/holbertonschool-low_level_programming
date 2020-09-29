#include "holberton.h"

/**
 * *_strcpy - Copies the string from src to dest.
 * @dest: Destiny string.
 * @src: Sorce string.
 * Return: A copy string.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] == '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
