#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *@str: pointer to char
 *
 *Return: void
 */

void _puts(char *str)
{
	int i;

	i = str;

	while (i != 0)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
