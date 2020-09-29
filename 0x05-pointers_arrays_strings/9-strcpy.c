#include "holberton.h"
/**
 * _strcpy - copy the string in src to dest
 *
 * @dest: destiny char
 * @src: source char
 * Return: copy char in destiny
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
