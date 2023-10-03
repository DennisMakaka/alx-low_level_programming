#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory location.
 * @str: Pointer to the input string.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or if
 *         memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int char_index, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string*/
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the duplicated string*/
	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	/* Copy the characters from the original string to the duplicated string */
	for (char_index = 0; str[char_index] != '\0'; char_index++)
		dup_str[char_index] = str[char_index];

	dup_str[char_index] = '\0'; /* Null-terminate the duplicated string */
	return (dup_str);
}
