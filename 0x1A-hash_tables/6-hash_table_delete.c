#include "hash_tables.h"
/**
 * hash_table_delete -  deletes a hash table.
 * @ht: table
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *no, *tm;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			no = ht->array[i];
			while (no != NULL)
			{
				tm = no->next;
				free(no->value);
				free(no);
				no = tm;
			}
		}
	}
	free(head->array);
	free(head);
}
