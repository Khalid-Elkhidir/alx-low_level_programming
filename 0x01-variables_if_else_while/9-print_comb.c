#include <stdio.h>

/**
 * main - This program prints single digit
 * combinations
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
		putchar(44);
		putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
