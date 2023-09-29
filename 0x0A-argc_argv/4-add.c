#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string consists of digits.
 * @str: The input string.
 *
 * Return: 1 if the string consists of digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i])) /* Check if there are non-digit characters */
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Sums up integers passed as command-line arguments.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	for (i = 1; i < argc; i++) /* Start from 1 to skip program name */
	{
		if (check_num(argv[i]))
		{
			str_to_int = atoi(argv[i]); /* Convert string to int using atoi */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum); /* Print the sum */

	return (0);
}
