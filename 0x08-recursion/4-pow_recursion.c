#include "holberton.h"

/**
 * _pow - Calculate x raised to the power of y.
 * @x: Number x.
 * @y: Number y.
 * Return: Result of the pow.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
