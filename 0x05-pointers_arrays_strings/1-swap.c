#include "main.h"

/**
 * swap_int - change value of variable to 98
 *@a: pointer to first integer
 *@b: pointer to second integer
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int *i;

	i = a;
	a = b;
	b = i;
}
