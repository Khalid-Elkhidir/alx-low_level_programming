#include <stdio.h>

/**
 * main - This program prints numbers of base16
 *
 * Return: return 0
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}


	for (ch = 'a' ; ch < 'g' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
