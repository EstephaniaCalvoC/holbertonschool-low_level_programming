#include "holberton.h"

/**
 * *_strncpy - Copy n bytes from source to destiny string.
 * @dest: Destiny string.
 * @src: Source string.
 * @n: Bytes from src string.
 * Return: Destiny string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
