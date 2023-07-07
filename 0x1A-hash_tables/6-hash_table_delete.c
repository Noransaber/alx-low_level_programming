#include "hash_tables.h"
/**
 * hash_table_delete -  deletes a hash table.
 * @ht: table
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *no, *tm;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		no = ht->array[i];
		while (no != NULL)
		{
			tm = no;
			no = no->next;
			free(tm->key);
			free(tm->value);
			free(tm);
			}
		}
	free(ht->array);
	free(ht);
}
