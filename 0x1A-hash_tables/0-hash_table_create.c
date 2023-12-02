#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table
 *@size: size of the hash table
 *Return: returns the hash table else null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
	{
		return (NULL);
	}
	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
