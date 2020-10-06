#include "holberton.h"

/**
 * _strlen_recursion - Return the length of a string
 * @s: String
 * Return: Lengt
 */

int _strlen_recursion(char *s)
{
	int size;

	if (*s != '\0')
	{
		size = _strlen_recursion(s + 1);
		return (size + 1);
	}
	else
	{
		return (0);
	}
}
