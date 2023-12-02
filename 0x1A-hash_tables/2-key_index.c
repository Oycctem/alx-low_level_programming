#include "hash_tables.h"
/**
 *key_index - functions that gives the index of a key
 *@key: the key
 *@size: size of the hash table
 *Return: returns the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
