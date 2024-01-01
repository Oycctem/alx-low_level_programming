#include "hash_tables.h"
/**
 * check_collision_in_node - Check for collision in the linked list.
 * @head: Head of the linked list
 * @key: Hash table key
 * Return: Pointer to the node if key is found, otherwise NULL
 */
hash_node_t *check_collision_in_node(hash_node_t *head, const char *key)
{
	hash_node_t *tmp = head;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp);

		tmp = tmp->next;
	}
	return (tmp);
}
/**
 * hash_table_set - Add or update the value of a key in a hash table.
 * @ht: The hash table to be manipulated
 * @key: The key to be added or updated
 * @value: The value to be associated with the key
 * Return: 1 if successful, 0 if an error occurred
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *existing_node = check_collision_in_node(ht->array[idx], key);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}

	if (existing_node)
	{
		free(existing_node->value);
		existing_node->value = strdup(value);
		return (1);
	}

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
