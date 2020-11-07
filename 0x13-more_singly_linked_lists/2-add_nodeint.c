#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: Pointer to pointer head of the linked list.
 * @n: Integer number of the node to add.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;/*New node*/

	/*Allocate memory for a new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/*Create a new node*/
	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
