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

	int j;
	
	j = 0;

	while (j < length / 2)
	{
		char tmp;

		tmp = *i;
		s[length - 1] = s[j];
		s[j] = tmp;

		length--;
		j++;
	}
}
