#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element meeting a condition.
 *
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A function to determine the condition.
 *
 * Return: The index of the first element meeting the condition, or -1 if none
 *         match or if size is less than or equal to 0, or if cmp is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	if (array != NULL && size > 0 && cmp != NULL)
	{
	int i;

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))

		return (i);
	}
	}

	return (-1);
}
