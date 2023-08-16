#include "function_pointers.h"

/**
  * int_index - function that searches for integer
  * @array: pointer to integers array
  * @size: number of elements of the array
  * @cmp: pointer to comparing values function
  *
  * Return: integer found or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
