#include "holberton.h"

/**
 * is_prime - Identify if a number is prime or not.
 * @n: Number.
 * @i: Multiple.
 * Return: 0 if the number is not prime and 1 if it is.
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i >= n / 2)
		return (1);
	else
		return (is_prime(n, i + 1));
	return (1);
}

/**
 * is_prime_number - Identify if a number is prime or not.
 * @n: Number.
 * Return: 0 if the number is not prime and 1 if it is.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}
