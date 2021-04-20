#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located
 * or -1 if the value is not present.
 */
int binary_search(int *array, size_t size, int value)
{
	int r, mid, l, i;
	char *sep = NULL;

	if (array == NULL)
		return (-1);

	r = 0;
	l = size - 1;

	while (l >= r)
	{
		sep = "";
		printf("Searching in array: ");
		for (i = r; i <= l; i++)
		{
			printf("%s%d", sep, array[i]);
			sep = ", ";
		}
		printf("\n");
		mid = (r + l) / 2;
		if (value > array[mid])
			r = mid + 1;
		else if (value < array[mid])
			l = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
