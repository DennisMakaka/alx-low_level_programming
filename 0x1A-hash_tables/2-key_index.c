#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table's array
 * @key: The key to find the index for
 * @size: The size of the array
 *
 * Return: the index where the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Use the hash_djb2 function to compute the hash value */
	hash_value = hash_djb2(key);

	/* Return the index within the array size */
	return (hash_value % size);
}
