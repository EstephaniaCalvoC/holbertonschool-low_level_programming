#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to pinter head of linked list.
 * Return: Pointer to head of reverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *tail = NULL;

	if (head == NULL)
		return (NULL);

	for (; *head != NULL;)
	{
		tail = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = tail;
	}

	*head = prev_node;
	return (*head);
}
