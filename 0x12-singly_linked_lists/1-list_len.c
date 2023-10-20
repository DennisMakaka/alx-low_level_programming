#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns te number of elements in a linked list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0; /* Initialize the count to 0. */

	while (h)
	{
		n++; /* Increment the count. */
		h = h->next; /* Move to the next node. */
	}

	return (n); /* Return the total number of elements in a list. */
}

