#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion - return the value of two umbers raised to the power
 *@x: a number
 *@y: another number
 *Return: -1 || or the value of the digits raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
