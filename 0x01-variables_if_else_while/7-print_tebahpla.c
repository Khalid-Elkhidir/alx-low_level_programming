#include <stdio.h>

/**
 * main - This program prints reversed alphabet in lowercase
 *
 * Return: return 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
