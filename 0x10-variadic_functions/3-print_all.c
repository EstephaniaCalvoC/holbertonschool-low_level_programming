#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i;
	int nf;/* Number of formats*/
	va_list element;
	format_t arr_f[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL},
	};
	char *separator = "";

	va_start(element, format);

	/*Run each character of format*/
	nf = 0;

	while (format != NULL && format[nf] != '\0')
	{
		/*Print if the character is valid*/
		i = 0;
		while (i < 4)
		{
			if (*arr_f[i].f == format[nf])
			{
				printf("%s", separator);
				arr_f[i].print(element);
				separator = ", ";
				break;
			}
			i++;
		}
		nf++;
	}
	printf("\n");
	va_end(element);
}

/**
 * print_c - Print with character format.
 * @element: List of elements
 */
void print_c(va_list element)
{
	printf("%c", va_arg(element, int));
}

/**
 * print_i - Print with integer format.
 * @element: List of elements
 */
void print_i(va_list element)
{
	printf("%d", va_arg(element, int));
}

/**
 * print_f - Print with float format.
 * @element: List of elements
 */
void print_f(va_list element)
{
	printf("%f", va_arg(element, double));
}

/**
 * print_s - Print with string format.
 * @element: List of elements
 */
void print_s(va_list element)
{
	char *str = va_arg(element, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
