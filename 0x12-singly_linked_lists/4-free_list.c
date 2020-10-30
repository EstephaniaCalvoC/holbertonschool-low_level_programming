#include "lists.h"

/**
 * free_list - Free a list_t list.
 * @head: Head of linked list_t list.
 */
void free_list(list_t *head)
{
	list_t *tail = NULL;

	for (tail = head; head != NULL;)
	{
		tail = head->next;
		free(head->str);
		free(head);
		head = tail;
	}
}
