#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and checks for success.
 * @b: Number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, it terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98); /*Terminate the program with an error code if allocation fails */
	}

	return (ptr);
}
