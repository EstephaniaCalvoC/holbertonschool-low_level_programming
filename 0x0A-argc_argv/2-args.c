#include "holberton.h"
#include <stdio.h>

/**
 * main - Print all arguments it receives.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
