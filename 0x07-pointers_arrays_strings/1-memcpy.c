#include "holberton.h"

/**
 * _memcpy - Copy n bytes form memory area src to dest.
 * @dest: Destiny memory area.
 * @src: Source memory area.
 * @n: Number of the bytes.
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
