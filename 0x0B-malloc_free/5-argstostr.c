#include "holberton.h"
#include "stdlib.h"

/**
 * _arrstrlen - Count the length of the concatenate string.
 * @ac: Size of array.
 * @av: Array of arguments.
 * Return: Length.
 */

int _arrstrlen(int ac, char **av)
{
	int i, j, c;

	c = ac;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}

	return (c + 1);
}

/**
 * argstostr - Concatenate all the arguments of this program.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 * Return: String with all the arguments splits whit a new line.
 */
char *argstostr(int ac, char **av)
{
	int size, i, j, c;
	char *arrscat;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	size = _arrstrlen(ac, av);

	arrscat = malloc(sizeof(char) * size);

	if (arrscat == NULL)
		return (NULL);

	c = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arrscat[c] = av[i][j];
			c++;
		}
		arrscat[c] = '\n';
		c++;
	}
	arrscat[c] = '\0';

	return (arrscat);

}
