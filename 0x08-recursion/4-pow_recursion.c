#include "holberton.h"

/**
 * _pow - Calculate x raised to the power of y.
 * @x: Base number.
 * @y: Power.
 * Return: 0 is success.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
