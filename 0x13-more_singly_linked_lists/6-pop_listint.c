#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to pointer head of linked list.
 * Return: The head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tail = NULL;
	int n_value;

	if (*head == NULL)
		return (0);

	tail = (*head)->next;
	n_value = (*head)->n;
	free(*head);
	*head = tail;

	return (n_value);
}
