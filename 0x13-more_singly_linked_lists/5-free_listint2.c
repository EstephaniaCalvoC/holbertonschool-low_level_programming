#include "lists.h"

/**
 * free_listint2 - Free a listint_t list.
 * @head: Pointer to pointer head of linked listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tail = NULL;

	for (; *head != NULL;)
	{
		tail = (*head)->next;
		free(*head);
		*head = tail;
	}

	/*Set head as NULL*/
	*head = NULL;
}
