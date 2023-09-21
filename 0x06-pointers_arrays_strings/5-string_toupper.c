#include "main.h"

/**
 * string_toupper - Convert all lowercase characters to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the converted string (str).
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32; /* Convert to uppercase */
		index++;
	}
	return (str);
}
