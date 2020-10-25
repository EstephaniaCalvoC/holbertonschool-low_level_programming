#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings, followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (!s)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
