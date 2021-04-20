#include "search_algos.h"

/**
 * r_binary_search - Searches for a value in an array of integers
 * using the Binary search algorithm recursively.
 * @array: A pointer to the first element of the array to search in.
 * @r: Right position.
 * @l: Left position.
 * @value: The value to search for.
 * Return: The first index where value is located
 * or -1 if the value is not present.
 */
int r_binary_search(int *array, int r, int l, int value)
{
	int mid, i;
	char *sep = "";

	printf("Searching in array: ");
	for (i = r; i <= l; i++)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	printf("\n");

	mid = ((l - r) / 2) + r;
	if (value == array[mid] && value != array[mid - 1])
		return (mid);

	if (r == l)
		return (-1);

	if (value <= array[mid])
		return (r_binary_search(array, r, mid, value));

	if (value > array[mid])
		return (r_binary_search(array, mid + 1, l, value));

	return (-1);
}

/**
 * advanced_binary - Searches for a value in an array of integers
 * using the Binary search algorithm recursively.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located
 * or -1 if the value is not present.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (r_binary_search(array, 0, size - 1, value));
}
