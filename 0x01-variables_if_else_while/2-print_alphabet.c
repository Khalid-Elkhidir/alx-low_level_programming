#include <stdio.h>

/**
 * main - This program prints alphabet in lowercase
 *
 * Return: return 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
