#include "main.h"
#include <stddef.h>

/**
 * reverse_string - Reverse a string.
 *
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
	int a = 0;
	int b = 0;
	char temp;

	while (*(str + a) != '\0')
	{
	a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
	temp = *(str + b);
	*(str + b) = *(str + a);
	*(str + a) = temp;
	}
}

/**
 * add_digits - Helper function to add two digits and manage overflow.
 *
 * @val1: The first digit.
 * @val2: The second digit.
 * @overflow: A pointer to the overflow flag.
 *
 * Return: The sum of val1 and val2.
 */
int add_digits(int val1, int val2, int *overflow)
{
	int temp_tot = val1 + val2 + *overflow;

	if (temp_tot >= 10)
	*overflow = 1;
	else
	*overflow = 0;

	return (temp_tot % 10);
}

/**
 * infinite_add - Add two numbers represented as strings.
 *
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: A buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or NULL if there's an error.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0;
	int a = 0;
	int b = 0;
	int digits = 0;
	int val1 = 0;
	int val2 = 0;
	int temp_tot = 0;

	while (*(n1 + a) != '\0')
	a++;
	while (*(n2 + b) != '\0')
	b++;
	a--;
	b--;

	if (b >= size_r || a >= size_r)
	return (NULL);
	while (b >= 0 || a >= 0 || overflow == 1)
	{
	if (a < 0)
		val1 = 0;
	else
		val1 = *(n1 + a) - '0';
	if (b < 0)
	val2 = 0;
	else
	val2 = *(n2 + b) - '0';
	temp_tot = add_digits(val1, val2, &overflow);
	if (digits >= (size_r - 1))
	return (NULL);
	*(r + digits) = temp_tot + '0';
	digits++;
	b--;
	a--;
	}
	if (digits == size_r)
	return (NULL);
	*(r + digits) = '\0';
	reverse_string(r);
	return (r);
}
