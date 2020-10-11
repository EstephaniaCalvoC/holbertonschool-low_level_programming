#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check for a digit (0 through 9).
 * @c: Charater to check
 * Return: 1 if c is a digit, return 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - Add the given numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	int i, radd;

	if (argc <= 1)
	{
		printf("0");
	}

	for (i = 1; i < arg; i++)
	{
		if (_isdigit(argv[i]))
		{
			radd += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
        printf("%d\n", radd);

	return (0);
}
