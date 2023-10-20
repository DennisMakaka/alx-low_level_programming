#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates memory used by a linked list.
 * @head: A pointer to the start of the list.
 *
 * This function frees the memory used by each element in a linked list.
 * It starts at the beginning of the list and iterates through, freeing each
 * element one by one, including the strings held in each element.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next; /* Store the next element in temp. */
		free(head->str);   /* Deallocate the string. */
		free(head);        /* Deallocate the element. */
		head = temp;       /* Move to the next element. */
	}
}
