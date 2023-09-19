#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char password[100];
	int i, sum, remaining;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		/* Generates printable characters between ASCII 33 ('!') and 126 ('~') */
		password[i] = rand() % 94 + 33;
		sum += password[i];
		putchar(password[i]);
		if (sum >= 2772)
		{
			/* Calculate the final character to reach the sum */
			remaining = 2772 - sum + password[i];
			password[i] = remaining;
			putchar(remaining);
			break;
		}
	}

	putchar('\n');

	return (0);
}
