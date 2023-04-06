#include <stdio.h>
#include "main.h"
/**
 *factorial - to return the factorial of a given number
 *@n: the number's factorial to be returned
 *Return: factorial of said number || zero || minus one
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
