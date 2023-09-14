#include "main.h"

/**
 * print_numbers - Prints digits from 0 to 9, followed by a newline.
 *
 * Return: void (no return value)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
}
