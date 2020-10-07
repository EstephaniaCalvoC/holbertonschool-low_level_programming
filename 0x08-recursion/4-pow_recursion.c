#include "holberton.h"
/**
 * _pow_recursion - Calculate the value of x raised to the power of y
 *
 * @x: int value to rise
 * @y: int power value
 * Return: Result or error
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
