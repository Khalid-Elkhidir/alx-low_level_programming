#include "main.h"

/**
 * _strlen - returns string length
 * @s: pointer to char
 *
 *Return: string length
 */

int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	i = *s;

	while (i != 0)
	{
		length++;
		i = *(s + length);
	}

	return (length);
}
