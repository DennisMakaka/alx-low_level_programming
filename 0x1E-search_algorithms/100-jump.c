#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 *              Uses the square root of the array size as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step;

    /* Check if array is NULL or empty */
    if (array == NULL || size == 0)
        return (-1);

    /* Calculate the jump step */
    step = sqrt(size);
    for (i = jump = 0; jump < size && array[jump] < value;)
    {
        /* Print the value being checked */
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += step;
    }

    /* Print the range where the value is found */
    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    /* Adjust the jump index if it exceeds the array size */
    jump = jump < size - 1 ? jump : size - 1;

    /* Linear search within the identified range */
    for (; i < jump && array[i] < value; i++)
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    /* Print the last checked value */
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    /* Check if value is found and return its index */
    return (array[i] == value ? (int)i : -1);
}

