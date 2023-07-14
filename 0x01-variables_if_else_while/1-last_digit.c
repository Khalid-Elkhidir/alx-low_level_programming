#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program test the last digit of a random
 * number and prints it
 *
 * Return: return 0
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
