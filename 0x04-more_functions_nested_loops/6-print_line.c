#include "main.h"

/**
 * print_line - prints a straint line
 *@n: number of times '_' is printed
 *
 *Return: void
 */

void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
		_putchar('\n');
	}
}
