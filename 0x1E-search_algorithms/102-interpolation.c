#include "search_algos.h"

/**
 * interpolation_search - Search a value in a sorted array of integers
 * using the interpolation search algorithm.
 * @array: A pointer to the first element of the array.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index where value was find or -1 if failure.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (l <= r)
	{
		mid = l + (((double)(r - l) / (array[r] - array[l])))
			* (value - array[l]);
		if (mid < size)
			printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	return (-1);
}
