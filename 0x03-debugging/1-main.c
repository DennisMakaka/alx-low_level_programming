#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function causes an infinite loop and then avoids it.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	/*
	 * while (i < 10)
	 * {
	 *     putchar(i);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
