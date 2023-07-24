i#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *@str: pointer to char
 *
 *Return: void
 */

void _puts(char *str)
{
	int i;
	int index;

	i = *str;
	index = 1;

	while (i != 0)
	{
		_putchar(i);
		i = *(str + index);
	}

	_putchar('\n');
}
