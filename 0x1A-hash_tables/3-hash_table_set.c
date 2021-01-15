#include "hash_tables.h"
#include "string.h"

/**
 * add_el - Add a new node at the beginning of a hash_node list.
 * @head: Pointer to pointer head of a hash_node list.
 * @c_value: Copy of string value of the element.
 * @key: Key of the element.
 * Return: The address of the new element, or NULL if it failed.
 */
hash_node_t *add_el(hash_node_t **head, char *c_value, const char *key)
{
	hash_node_t *new;/*New node*/

	/*Allocate memory for a new node*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(c_value);
		return (NULL);
	}

	/*Create a new node*/
	new->value = c_value;
	new->key = strdup(key);
	if (!new->key)
	{
		free(c_value);
		free(new);
		return (NULL);
	}

	new->next = *head;
	*head = new;

	return (new);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Head of hash table.
 * @key: Key of the element.
 * @value: Value of the element.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* Index of hash tables*/
	hash_node_t *element;
	char *c_value;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	/*Copy value*/
	c_value = strdup(value);
	if (!c_value)
		return (0);

	/*Find index*/
	index = key_index((const unsigned char *)key, ht->size);

	element = ht->array[index];

	/*If key exists -> Update*/
	for (; element; element = element->next)
	{
		if (strcmp(element->key, key) == 0)
		{
			free(element->value);
			element->value = c_value;
			return (1);
		}
	}

	/*If key doesn't exist -> Add element*/
	element = add_el(&(ht->array[index]), c_value, key);
	if (!element)
		return (0);

	return (1);
}
