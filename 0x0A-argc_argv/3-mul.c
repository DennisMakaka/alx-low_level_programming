#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int idx = 0, num_of_minuses = 0, num = 0, len = 0, found_digit = 0, cur_digit;

	while (s[len] != '\0')
		len++;

	while (idx < len && !found_digit)
	{
		if (s[idx] == '-')
			num_of_minuses++;

		if (s[idx] >= '0' && s[idx] <= '9')
		{
			cur_digit = s[idx] - '0';
			if (num_of_minuses % 2)
				cur_digit = -cur_digit;
			num = num * 10 + cur_digit;
			found_digit = 1;
			if (s[idx + 1] < '0' || s[idx + 1] > '9')
				break;
			found_digit = 0;
		}
		idx++;
	}

	if (!found_digit)
		return (0);
	return (num);
}

/**
 * main - Multiplies two numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int result, first_num, second_num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = _atoi(argv[1]);
	second_num = _atoi(argv[2]);
	result = first_num * second_num;

	printf(" % d\n", result);

	return (0);
}
