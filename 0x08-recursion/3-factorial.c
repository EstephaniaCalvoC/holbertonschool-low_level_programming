#include "holberton.h"

/**
 * factorial - Return the factorial of a given number.
 * @n: Number.
 * Return: Factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
