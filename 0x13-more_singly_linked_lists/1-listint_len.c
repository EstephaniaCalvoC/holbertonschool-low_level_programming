#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked listint_t list.
 * @h: Pointer to listint_t.
 * Return: The number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;/*Counter of nodes*/

	for (n_nodes = 0; h != NULL; n_nodes++)
		h = h->next;

	return (n_nodes);
}
