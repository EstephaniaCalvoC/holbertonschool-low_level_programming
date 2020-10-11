#include <stdio.h>
#include <stdlib.h>

/**
 * _change - Count the minimum number of coins to make change
 * for an amount of money.
 * @num: Amount.
 * @mod: Array of coins.
 * @size: Size of array.
 * Return: The minimum number of coins.
 */

int _change(int num, int *mod, int size)
{
	if (num < *mod)
		return (0);
	return ((num / *(mod + size - 1)) +
	       _change((num % *(mod + size - 1)), mod, size - 1));
}

/**
 * main - Print the change for an amount of money.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 is succes.
 */
int main(int argc, char *argv[])
{
	int num, size, c_amount;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		size = 5;
		if (num <= 0)
			printf("0\n");
		else
		{
			c_amount = _change(num, &coins[0], size);
			printf("%d\n", c_amount);
		}
	}

	return (0);
}
