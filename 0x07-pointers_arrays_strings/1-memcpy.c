#include "main.h"

/**
 * _memcpy - Copies a memory area.
 *
 * @dest: Pointer to the destination memory where data will be copied.
 * @src: Pointer to the source memory to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory with the copied data.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
