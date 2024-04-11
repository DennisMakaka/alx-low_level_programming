#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 *               of integers using linear skip.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *node, *jump;

    /* Check if the list is NULL */
    if (list == NULL)
        return (NULL);

    /* Perform linear skip search */
    for (node = jump = list; jump->next != NULL && jump->n < value;)
    {
        /* Update node and jump pointers */
        node = jump;
        if (jump->express != NULL)
        {
            jump = jump->express;
            printf("Value checked at index [%ld] = [%d]\n",
                   jump->index, jump->n);
        }
        else
        {
            /* Traverse to the end of the list */
            while (jump->next != NULL)
                jump = jump->next;
        }
    }

    /* Print the range where the value might be */
    printf("Value found between indexes [%ld] and [%ld]\n",
           node->index, jump->index);

    /* Perform linear search within the identified range */
    for (; node->index < jump->index && node->n < value; node = node->next)
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    /* Return the node if the value is found, otherwise return NULL */
    return (node->n == value ? node : NULL);
}

