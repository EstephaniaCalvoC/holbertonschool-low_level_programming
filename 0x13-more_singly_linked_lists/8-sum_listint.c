#include "lists.h"

/**
 * sum_listint - Calculaate the sum of all the data (n) of a linked list.
 * @head: Head of the linked list.
 * Return: Return the sum of all node values.
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	unsigned int sum = 0;

	for (node = head; node != NULL; node = node->next)
	{
		sum += node->n;
	}

	return (sum);

}
