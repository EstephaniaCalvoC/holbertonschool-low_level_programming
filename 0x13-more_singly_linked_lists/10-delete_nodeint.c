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
 * delete_nodeint_at_index -  Deletes the node at indicate index
 * of a listint_t linked list.
 * @head: Pointer to pointer head of linked list.
 * @index: Index of node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = *head;
	listint_t *tail = NULL;
	unsigned int size, i;

	size = list_len(prev_node);

	if (index >= size)
		return (-1);

	/*Delete node*/

	/*Case: Delate the first position*/
	if (index == 0)
	{
		tail = (*head)->next;
		free(*head);
		*head = tail;
		return (1);
	}

	/*Generic case*/

	/*--Identify previus node*/
	prev_node = *head;
	for (i = 0; i < (index - 1); i++)
		prev_node = prev_node->next;

	/*--Identify tail*/
	tail = (prev_node->next)->next;
	free(prev_node->next);
	prev_node->next = tail;

	return (1);
}
