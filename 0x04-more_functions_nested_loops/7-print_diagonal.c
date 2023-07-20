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
		if (n > 0)
		{
			_putchar('\\');

			int j;

			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
		}
	}

		_putchar('\n');
}
