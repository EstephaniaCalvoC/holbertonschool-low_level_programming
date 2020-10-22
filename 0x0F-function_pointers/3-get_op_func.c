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
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s && *(s + 1) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
