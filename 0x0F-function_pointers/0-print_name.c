#include "function_pointers.h"

/**
 * print_name - Print a name.
 * @name: String with a name.
 * @f: Funtion pointer.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
