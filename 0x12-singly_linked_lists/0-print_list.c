#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of a linked list list_t.
 * @h: Pointer to linked list list_t.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;/*Counter of nodes*/

	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (n_nodes);
}
