#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: Hash table array's size
 * Return: A pointer to hash_table structure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	unsigned long int i; /* Runner of array*/

	/* Create table*/
	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
		return (NULL);

	h_table->size = size;
	/* Create array*/
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table->array)
		return (NULL);

	/*Inicialize each array's element with NULL*/
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
