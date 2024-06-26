#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, step_size;
    listint_t *node, *jump;

    /* Check if the list is NULL or empty */
    if (list == NULL || size == 0)
        return (NULL);

    /* Initialize step and step_size */
    step = 0;
    step_size = sqrt(size);

    /* Perform jump search */
    for (node = jump = list; jump->index + 1 < size && jump->n < value;)
    {
        /* Update node and jump pointers */
        node = jump;
        for (step += step_size; jump->index < step; jump = jump->next)
        {
            if (jump->index + 1 == size)
                break;
        }
        /* Print the value being checked */
        printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
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

