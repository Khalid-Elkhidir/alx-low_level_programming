#include "main.h"

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;

	for (i ; i < size; i++)
	{
		sum1 += *(a + ((size * i) + i));
		sum2 += *(a + ((size * i) + size - 1 - i));
	}
	
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}
