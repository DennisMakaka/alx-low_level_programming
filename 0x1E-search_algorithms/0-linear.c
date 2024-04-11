#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a message every time it compares a value in the array.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    /* Check if array is NULL */
    if (array == NULL)
        return (-1);

    /* Iterate through the array */
    for (i = 0; i < size; i++)
    {
        /* Print the value being checked */
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        
        /* Check if value is found */
        if (array[i] == value)
            return (i);
    }

    /* Return -1 if value is not found */
    return (-1);
}

