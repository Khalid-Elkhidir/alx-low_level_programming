#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *@n: number of times '\' is printed
 *
 *Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;
		
		j = 0;

		if (n > 0)
		{

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
