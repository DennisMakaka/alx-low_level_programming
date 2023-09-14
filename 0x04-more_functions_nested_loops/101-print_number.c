#include "main.h"

/**
<<<<<<< HEAD
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
=======
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
>>>>>>> 8e4e3d301307e231aa5605cda366464f3d82bc5a
}
