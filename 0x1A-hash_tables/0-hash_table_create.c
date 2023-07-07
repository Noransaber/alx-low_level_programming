#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: The size of the array.
*
* Return: If an error occurs - NULL.
*         Otherwise - a pointer to the new hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ta = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (ta == NULL)
	{
		return (NULL);
	}

	ta->size = size;
	ta->array = malloc(sizeof(hash_node_t *) * size);
	if (ta->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ta->array[i] = NULL;

	return (ta);
}

