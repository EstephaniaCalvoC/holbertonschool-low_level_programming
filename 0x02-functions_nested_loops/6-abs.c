#include "holberton.h"

/**
 * _abs - Compute the absolute value of an integer.
 * @n: integer number
 * Return: Absolute value.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
