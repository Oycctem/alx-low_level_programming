#include "main.h"
/**
 *_pow_recursion - function that returns the value of x raise to the poer of y
 *@x: int
 *@y: int
 *Return: returns the value of x to the poer of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y <= 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
