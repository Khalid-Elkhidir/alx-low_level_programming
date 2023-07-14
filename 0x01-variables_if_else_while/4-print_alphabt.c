#include <stdio.h>

/**
 * main - This program prints alphabet in lowercase
 * except e and q
 *
 * Return: return 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
