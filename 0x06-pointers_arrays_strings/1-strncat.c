#include "holberton.h"

/**
 * *_strncat - Concatenate two strings
 * @dest: Destiny string.
 * @src: Source string.
 * @n: Bytes from src string.
 * Return: Destiny string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, size;

	for (size = 0; dest[size] != '\0'; size++)
		;
	for (index = size;
	     n > 0 && src[index - size] != '\0';
	     index++, n--)
		dest[index] = src[index - size];
	dest[index] = '\0';
	return (dest);
}
