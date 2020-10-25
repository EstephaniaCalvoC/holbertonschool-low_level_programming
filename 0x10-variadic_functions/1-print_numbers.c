#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++9)
	{
		printf("%d", va_arg(ap, int));
		if ((n - i - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
