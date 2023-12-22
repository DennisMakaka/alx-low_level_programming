#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key in the hash table
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index for the key using the key_index function */
	index = key_index((unsigned char *)key, ht->size);

	/* Traverse the linked list at the computed index to find the key */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value); /* Key found, return the associated value */
		current = current->next;
	}

	return (NULL); /* Key not found */
}
