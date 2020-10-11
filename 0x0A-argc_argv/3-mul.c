#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplie two numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	int rmult;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		rmult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", rmult);
	}

	return (0);
}
