#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list.
 * @head: Pointer to pointer head of the linked list.
 * @n: Integer number of the node to add.
 * Return: The address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = NULL;
	listint_t *end_node = NULL;

	/*Allocate memroy for a new node*/
	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
		return (NULL);

	/*Create a new node*/
	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	/*Find the current last node*/
	for (end_node = *head; end_node->next != NULL;)
		end_node = end_node->next;

	end_node->next = new_end;

	return (new_end);

}
