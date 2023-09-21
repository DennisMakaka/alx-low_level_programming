#include "main.h"

/**
 * leet - Encode a string into 1337speak.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char leetMap[] = "aAeEoOtTlL";
	char leetReplace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leetMap[j])
			{
				str[i] = leetReplace[j];
				break; /* Once replaced, no need to continue searching */
			}
		}
	}

	return (str);
}
