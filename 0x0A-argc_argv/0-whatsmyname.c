#include "holberton.h"
#include <stdio.h>

/**
 * main - Print the name of this program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
