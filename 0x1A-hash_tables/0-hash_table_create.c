#include "hash_tables.h"
/**
 * hash_table_create - func to create the hash table
 * @size: it's the size of the table
 * Return: pointer to the new table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n;
	hash_table_t *ht;

	 ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (n = 0; n < ht->size; n++)
		ht->array[n] = NULL;

	return (ht);
}
