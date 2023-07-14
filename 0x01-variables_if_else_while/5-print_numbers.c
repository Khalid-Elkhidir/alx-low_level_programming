#include <stdio.h>

/**
 * main - This program prints numbers 0-9
 *
 * Return: return 0
 */

int main(void)
{
	char i;

	for (i = '0' ; i < '10' ; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
