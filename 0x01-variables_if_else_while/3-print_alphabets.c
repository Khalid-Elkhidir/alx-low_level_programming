#include <stdio.h>

/**
 * main - This program prints alphabet in lowercase
 * and uppercase
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


	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
