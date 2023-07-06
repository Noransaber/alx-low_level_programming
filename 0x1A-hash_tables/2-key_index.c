#include "hash_tables.h"
/**
 * key_index - Getting the index of the key
 * @key: thee key
 * @size: size of the table
 * Return: INDEX
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
