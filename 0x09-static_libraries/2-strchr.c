#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character `c` in the
 * string `s`, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	/* Iterate through the string until a match is found or end of string */
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]); /* Return a pointer to the matching character */
	}

	 /* If no match is found, return NULL */
	return (NULL);
}
