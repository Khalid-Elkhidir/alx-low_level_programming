#include "main.h"

/**
 * puts2 - prints every other char followed by new line
 *@str: pointer to char
 *
 *Return: void
 */

void puts2(char *str)
{
	char *i;

	i = str;

	while (*i != 0)
	{
		_putchar(*i);
		i = i + 2;
	}

	_putchar('\n');
}
