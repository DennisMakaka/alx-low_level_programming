#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;
	int capitalizeNext = 1;  /* Show if the next character should capitalize */

	while (str[index])
	{
		char currentChar = str[index];

		if (capitalizeNext && (currentChar >= 'a' && currentChar <= 'z'))
		{
			str[index] -= 32; /* Convert to uppercase */
			capitalizeNext = 0; /* Reset the flag */
		}

		if (currentChar == ' ' || currentChar == '\t' || currentChar == '\n' ||
			currentChar == ',' || currentChar == ';' || currentChar == '.' ||
			currentChar == '!' || currentChar == '?' || currentChar == '"' ||
			currentChar == '(' || currentChar == ')' || currentChar == '{' ||
			currentChar == '}')
		{
			capitalizeNext = 1; /* Set the flag to capitalize the next word */
		}
		index++;
	}
	return (str);
}
