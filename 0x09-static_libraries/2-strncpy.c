#include "main.h"

/**
 * _strncpy - Copy a string up to a specified number of characters.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* If n is greater than the length of src, pad with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
