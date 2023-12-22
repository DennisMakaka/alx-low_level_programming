#include "hash_tables.h"
#include <stdio.h>

/**
 * has_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1; /* Flag to check if it's the first element to print */

	if (ht == NULL)
		return; /* Do nothing if ht is NULL */

	printf("{");
	for (i = 0; i < ht ->size; i++)
	{
		hash_node_t *current = ht->array[i];
		while (current != NULL)
		{
			/* If it's not the first element, print a comma and space */
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			first = 0; /* Set the flag to indicate that it's not the first element anymore */
		}
	}
	printf("}\n");
}

