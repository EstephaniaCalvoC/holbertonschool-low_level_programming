#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t list.
 * @head: Pointer to head.
 * @index: Index of node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node = *head;

	if (!head || !(*head))
		return (-1);

	/*Only 1 node*/

	/*Find node to delete*/
	for (; index > 1; index--)
	{
		delete_node = delete_node->next;
		if (!delete_node)
			return (-1);
	}

	/*If there is the first node*/
	if (!index)
	{
		/*If there is only a node*/
		if (!(delete_node->next))
			*head = NULL;
		else
			*head = delete_node->next;
	}
	else
		delete_node = delete_node->next;

	if (delete_node->prev)
		delete_node->prev->next = delete_node->next;

	if (delete_node->next)
		delete_node->next->prev = delete_node->prev;

	free(delete_node);

	return (1);
}
