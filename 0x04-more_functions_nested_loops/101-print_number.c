#include "main.h"

/**
 * main - Test the print_number function.
 *
 * Description: This program tests the print_number function by calling it
 * with different integer values and printing the results.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
