#include "holberton.h"

/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}


/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	int idx;/*Index* of b*/
	unsigned int num = 0;/*Decminal number*/
	unsigned int k = 1;/*Powers of two*/

	if (b == NULL)
		return (0);

	/*Maximum index*/
	idx = _strlen(b) - 1;

	/*Run from the last to the first*/
	for (; idx >= 0; idx--)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] == '1')
			num += k;

		k *= 2;
	}

	return (num);
}
