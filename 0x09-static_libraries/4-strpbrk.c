#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates first occurrence of any character from `accept` in `s`.
 *
 * @s: The string to search.
 * @accept: The string containing characters to be matched.
 *
 * Return: A pointer to the first occurrence of any character from `accept`
 * in the string `s`, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	/* Iterate through the string `s` */
	while (*s)
	{
		/* Iterate through the string `accept` to find a matching character */
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s); /* Return a pointer to the matching character */
		}
		s++; /* Move to the next character in `s` */
	}

	return (NULL); /* Return NULL if no match is found */
}
