#include <stdio.h>
#include "main.h"
/**
 *_memset - prints constant bytes
 *@x: Address of memory to be printed
 *@a: What to print
 *@e: The number of times to print
 *Return: Memory area
 */
char *_memset(char *x, char a, unsigned int e)
{
	unsigned int i;

	i = 0;
	while (i < e)
	{
		x[i] = a;
		i++;
	}
	return (x);
}
