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

	for (i = 0 ; i < 9 ; i++)
	{
		putchar('0' + i);
		putchar(44);
		putchar(32);
	}

	putchar('0\n' + i);

	return (0);
}
