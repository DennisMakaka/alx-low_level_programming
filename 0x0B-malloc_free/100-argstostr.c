#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments in a double pointer array.
 * @ac: The number of arguments.
 * @av: The double pointer array of arguments.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 *         arguments, separated by newline characters, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, position = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calculate the total length needed for the concatenated string */
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	length++;
	length++; /* Account for the newline character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
	return (NULL);

	/* Copy the arguments into the concatenated string */
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	str[position] = av[i][j];
	position++;
	}
	str[position] = '\n'; /* Add a newline character after each argument */
	position++;
	}

	str[position] = '\0'; /* Null-terminate the concatenated string */

	return (str);
}
