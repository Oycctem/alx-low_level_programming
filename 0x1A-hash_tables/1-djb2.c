#include "hash_table.h"
/**
 *hash_djb2 - function that implements the djb2 algorithm
 *@str: string used to generate hash value
 *Return: returns the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
