#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all elements of a linked list.
 * @h: Pointer to the list_t list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* Initialize the count to 0. */

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");  /* Print when the string is NULL. */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);  /* Print length and string. */
		}
		h = h->next; /*Move to the next node. */
		count++; /* Increment the count. */
	}

	return (count); /* Return the total number of nodes printed. */
}
