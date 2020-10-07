#include "holberton.h"

/**
 * _sqrt_nat - Calculate the natural square root of a number
 * @n: Number raw.
 * @r: Result.
 */
int _sqrt_nat(int n, int r)
{
	if (n < 0 || n < r * r)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if ( n == r * r)
		return (r);
	else
		return (_sqrt_nat(n, r + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: Number.
 * Return: Result.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_nat(n, 0));
}
