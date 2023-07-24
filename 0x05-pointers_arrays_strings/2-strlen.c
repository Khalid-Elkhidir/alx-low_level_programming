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

	length = 0;

	while (*s != "/0")
	{
		length++;
		s++;
	}

	return (length);
}
