#include "3-calc.h"
/**
 *op_add - calculates the sum of a and b
 *@a: int
 *@b: int
 *Return: returns the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - calculates the difference of a and b
 *@a: int
 *@b: int
 *Return: returns the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - calculates the product of a and b
 *@a: int
 *@b: int
 *Return: returns the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - calculates the division of a and b
 *@a: int
 *@b: int
 *Return: returns the result
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
 *op_mod - calculates the remainder of division of a and b
 *@a: int
 *@b: int
 *Return: returns the result
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
