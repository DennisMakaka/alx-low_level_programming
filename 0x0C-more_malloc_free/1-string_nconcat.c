#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: A pointer to the resulting string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int a = 0, b = 0;
	unsigned int len1 = 0, len2 = 0;
	unsigned int result_size;

	/* Calculate the lengths of s1 and s2 */
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	/* Determine the size of the result string */
	result_size = (n < len2) ? (len1 + n) : (len1 + len2);
	result = malloc(sizeof(char) * (result_size + 1));

	if (result == NULL)
		return (NULL);

	/* Copy characters from s1 to result */
	for (a = 0; a < len1; a++)
		result[a] = s1[a];

	/* Copy n bytes from s2 to result */
	for (; a < result_size && s2[b]; a++, b++)
		result[a] = s2[b];

	/* Null-terminate the result string */
	result[a] = '\0';

	return (result);
}
