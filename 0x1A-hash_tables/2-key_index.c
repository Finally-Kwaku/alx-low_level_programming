#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: The key of the index
 * @size: The size of the array of the hash table
 * Return: Index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
