#include "main.h"

/**
 * rev_string - reverse string
 *@s: pointer to char
 *
 *Return: void
 */

void rev_string(char *s)
{
	char *i;
	int length;
	int j;
	int k;

	length = 0;
	j = 0;
	i = s;

	while (*i != 0)
	{
		length++;
		i++;
	}

	j = length - 1;
	k = 0;

	while (k < length / 2)
	{
		char tmp;

		tmp = s[k];

		s[i] = s[j];
		s[j] = tmp;

		j--;
		k++;
	}
}
