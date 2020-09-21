#include "holberton.h"

/**
 * main - Print "Holberton" followed by a new line.
 * Return: 0
 */

int main(void)
{
	char name[9];
	int i;

	name = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(name[i]);
	}

	_putchar('\n');

	return (0);
}
