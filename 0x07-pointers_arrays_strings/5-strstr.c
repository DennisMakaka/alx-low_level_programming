#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 *
 * @haystack: The string to search in.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of `needle` in `haystack`,
 * or NULL if `needle` is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *lh = haystack;
		char *ln = needle;

		/* Compare characters in `lh` and `ln` */
		while (*lh == *ln && *ln != '\0')
		{
			lh++;
			ln++;
		}

		/* If `ln` reaches the end, the substring was found */
		if (*ln == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
