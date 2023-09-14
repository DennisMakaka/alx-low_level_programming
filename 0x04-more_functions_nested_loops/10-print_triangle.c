#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle made of '#' characters.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			/* Print leading spaces */
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			/* Print '#' characters for the current row */
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			/* Move to the next line after each row */
			_putchar('\n');
		}
	}
}
