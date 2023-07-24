#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *@s: pointer to char
 *
 *Return: void
 */

void print_rev(char *s)
{
	char *i;
	int length;

	length = 0;
	i = s;

	while (*i != 0)
	{
		length++;
		i++;
	}

	while (length > 0)
	{
	i = (s + length);
	_putchar(*i);
	length--;
	}

	_putchar('\n');
}
