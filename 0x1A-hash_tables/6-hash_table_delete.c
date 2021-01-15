#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: Pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL, *tmp = NULL;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (head = ht->array[i]; head;)
		{
			free(head->value);
			free(head->key);
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
