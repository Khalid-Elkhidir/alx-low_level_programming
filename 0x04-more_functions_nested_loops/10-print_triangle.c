#include "main.h"

/**
 * print_triangles - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_tringle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < (size - i); j++)
			_putchar(' ');

		for (j = 0; j <= i; j++)
			_putchar('#');

		_putchar('\n');

	}
}
