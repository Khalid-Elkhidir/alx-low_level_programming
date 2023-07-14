#include <stdio.h>

/**
 * main - This program prints combinations of two two-digit
 * numbers
 *
 * Return: return 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j)
				{
					putchar('0' + (i / 10));
					putchar('0' + (i % 10));
					putchar(32);
					putchar('0' + (j / 10));
					putchar('0' + (j % 10));
					if (i != 98 || j != 99)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
