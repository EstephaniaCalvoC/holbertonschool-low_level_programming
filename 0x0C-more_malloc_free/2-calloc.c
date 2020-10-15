#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc, and
 * the memory is set to zero
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrlloc = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Allocate memory*/
	arrlloc = malloc(nmemb * size);

	if (arrlloc == NULL)
		return (NULL);

	/*Incialize array with 0*/
	for (i = 0; i < nmemb * size; i++)
		arrlloc[i] = 0;

	return (arrlloc);
}
