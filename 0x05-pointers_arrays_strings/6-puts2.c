#include "main.h"

/**
 * puts2 - prints every other char followed by new line
 *@str: pointer to char
 *
 *Return: void
 */

void puts2(char *str)
{
	int length, i;

	length = 0;
	i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length)
	{
		_putchar(str[i]);
		i = i + 2;
	}

	_putchar('\n');
}
