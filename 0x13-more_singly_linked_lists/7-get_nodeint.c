#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list.
 * @h: Pointer to head of list.
 * Return: The number of elements in a linked list.
 */
unsigned int list_len(const listint_t *h)
{
	unsigned int n_nodes = 0;/*Counter of nodes*/

	if (h == NULL)
		return (0);

	for (n_nodes = 0; h != NULL; n_nodes++)
		h = h->next;

	return (n_nodes);
}

/**
 * get_nodeint_at_index - Found the nth node of a listint_t linked list.
 * @head: Pointer to head of the linked list.
 * @index: Index of the node.
 * Return: The nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int size_list, i; /*i: Runner of list*/

	size_list = list_len(node);

	if (index >= size_list || size_list == 0)
		return (NULL);

	for (node = head, i = 0; i < index; i++)
		node = node->next;

	return (node);
}
