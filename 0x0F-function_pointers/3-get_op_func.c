#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Identify function to use.
 * @s: Charater of operator.
 *
 * Return: A functio.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error4\n");
	exit(98)
}
