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
 * insert_nodeint_at_index - Insert a new node at a given position.
 * @head: Pointer to pointer head of linked list.
 * @idx: Index to insert a new node.
 * @n: Integer value of neew node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node = *head;
	listint_t *new = NULL;
	unsigned int size, i;

	if (head == NULL)
		return (NULL);

	size = list_len(prev_node);

	if (idx > size)
		return (NULL);

	/*Allocate memory for new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/*Create new node*/
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/*--Find the element in the previus index*/
	prev_node = *head;
	for (i = 0; i < (idx - 1); i++)
		prev_node = prev_node->next;

	/*--Tail of new is tail of prev_node*/
	new->next = prev_node->next;
	/*--Tail of prev_node is the new node*/
	prev_node->next = new;

	return (new);
}
