#include <stdio.h>

/**
 * main - This program prints three digits
 * combinations
 *
 * Return: return 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 1 ; j < 9 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i != 7)
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
