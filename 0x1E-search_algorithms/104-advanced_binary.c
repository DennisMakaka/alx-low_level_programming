#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t i;

    /* If the search range is invalid, return -1 */
    if (right < left)
        return (-1);

    /* Print the [sub]array being searched */
    printf("Searching in array: ");
    for (i = left; i < right; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);

    /* Calculate mid index */
    i = left + (right - left) / 2;

    /* Check if value is found */
    if (array[i] == value && (i == left || array[i - 1] != value))
        return (i);

    /* Determine which half to search */
    if (array[i] >= value)
        return (advanced_binary_recursive(array, left, i, value));
    return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
    /* Check if array is NULL or empty */
    if (array == NULL || size == 0)
        return (-1);

    /* Call the recursive binary search function */
    return (advanced_binary_recursive(array, 0, size - 1, value));
}

