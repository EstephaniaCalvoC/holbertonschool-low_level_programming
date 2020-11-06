#include "holberton.h"

/**
 * get_endianness - Check the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	/*(*char) &x is used to "separate" the bytes and make*/
	/*the pointer point to the first.*/
	return ((int)*c);
}
