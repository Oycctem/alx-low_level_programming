#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: returns a value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[idx];

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}
	return (NULL);
}
