#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - func to create the hash table
 * @size: it's the size of the table
 * Return: pointer to the new table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n;
	hash_table_t *table;

	 table = malloc(sizeof(hash_table_t));

	 /*check if malloc failed*/
	if (table == NULL)
		return (NULL);

	 /*Update elements inside the table*/
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	 /*check for error*/
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	 /*itterate over the array and assign NULL to all array*/
	for (n = 0; n < table->size; n++)
		table->array[n] = NULL;

	return (table);
}
