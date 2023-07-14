#include <stdio.h>

/**
 * main - This program prints two digits
 * combinations
 *
 * Return: return 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 9 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 8)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
