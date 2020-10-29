#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
int _strlen(char *s)
{
	int c;/*Counter of characters*/

	for (c = 0; s[c]; c++)
		;

	return (c);
}

/**
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: Pointer to pointer head of the linked list.
 * @str: String of the node to add.
 * Return: The address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = NULL;/*New node at the end*/
	list_t *end_node = NULL;/*Currently end node*/

	if (str == NULL)
		return (NULL);

	/*Allocate memory for a new node*/
	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	/*Create a new node*/
	new_end->str = strdup(str);

	/*If strdup fail -> Free the new node*/
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	new_end->len = _strlen(new_end->str);
	new_end->next = NULL;

	/*Found a current last node*/
	if (*head == NULL)/*If the list are empty*/
	{
		*head = new_end;
		return (new_end);
	}

	for (end_node = *head; end_node->next != NULL;)
		end_node = end_node->next;

	end_node->next = new_end;

	return (new_end);
}
