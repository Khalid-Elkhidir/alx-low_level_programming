#include "main.h"

/*
 * _isupper - checks if character is uppercase
 * @c: is character to be checked
 * Return: 1 if character is uppercase, otherwise 0
 */

int _isupper(char c)
{
	if(c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
