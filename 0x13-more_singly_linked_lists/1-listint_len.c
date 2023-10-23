#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the liked list.
 * This is a function that counts the number of nodes in a singly linked list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
