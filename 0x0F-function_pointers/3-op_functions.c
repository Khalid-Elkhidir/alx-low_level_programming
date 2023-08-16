#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two integers.
  * @a: first integer
  * @b: second integer
  *
  * Return: subtraction value.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multibly two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: multiplication value
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: division outcome
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - module of division
  * @a: dividee
  * @b: divider
  *
  * Return: Outcome
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
