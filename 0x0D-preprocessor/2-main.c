#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *name = __FILE__;

	printf("%s\n", name);
	return (0);
}
