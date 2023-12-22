#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updats a key/value pair in the hash table
 * @ht: The hash table to add or update the key/value to
 * @value: The value associated with the key. must be duplicated.
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Get the index for the key usin thr key_index function */
	index = key_index((unsigned char *)key, ht->size);

	/* Check for collision: add the new node at the beginning of the list */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key already exists, update the value and return success */
			free(current->value); /* Free the previous value */
			current->value  = strdup(value);
			if (current->value == NULL)
				return (0); /*Memory allocation failed */
			return (1); /* Success */
		}
		current = current->next;
	}
	/* N collision, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* Memory allocation failed */
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		/* Memory allocation failed, free allocated memory and return failure */
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
