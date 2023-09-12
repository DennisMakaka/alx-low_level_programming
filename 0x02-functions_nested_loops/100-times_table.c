#include "main.h"

/**
 * print_number - Print a number, ensuring it takes up at least 3 characters.
 * @n: The number to print.
 */
void print_number(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Number of the times table (0 to 15).
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				print_number(k);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
