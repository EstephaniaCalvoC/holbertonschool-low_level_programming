#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all its parameters
 *
 * Return: The result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int result = 0;

	va_start (ap, n);

	for (i = 0; i < n; i++)
		result += va_arg (ap, int);

	va_end(ap);
	return (result);
}
