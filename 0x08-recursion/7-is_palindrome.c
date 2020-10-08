#include "holberton.h"

/**
 * _strlen_rec - Return the length of a string
 * @s: String
 * Return: Lengt
 */

int _strlen_rec(char *s)
{
	int size;

	if (*s != '\0')
	{
		size = _strlen_rec(s + 1);
		return (size + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * compare - Compare a string and its reverse.
 * @s: String.
 * @u: Reverse string.
 * Return: 1 if the strings are the same and 0 if not.
 */

int compare(char *s, char *u)
{
	if (*s == '\0')
		return (1);

	if (*s == *u)
		return (compare(s + 1, u - 1));
	else
		return (0);
}

/**
 * is_palindrome - Identify if a string is a palindrome.
 * @s: String.
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
        int size;

	size = _strlen_rec(s);

	char *u = s + size - 1;

	return (compare(s, u));
}
