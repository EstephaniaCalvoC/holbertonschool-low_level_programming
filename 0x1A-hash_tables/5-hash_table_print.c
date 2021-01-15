#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i; /* Runner of table*/
	hash_node_t *head = NULL;
	char *sep = "";

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		for (; head; head = head->next)
		{
			printf("%s'%s': '%s'", sep, head->key, head->value);
			sep = ", ";
		}
	}

	printf("}\n");
}
