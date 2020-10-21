#include "function_pointers.h"

/**
 * print_name - Print a name.
 * @name: String with a name.
 * @f: Funtion pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
