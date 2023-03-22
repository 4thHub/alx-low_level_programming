#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - display all numbers from input to 98
 *@c: the starting number
 */
void print_to_98(int c)
{
	if (c >= 98)
	{
		while (c > 98)
			printf("%d, ", c--);
		printf("%d\n", c);
	}
	else
	{
		while (c < 98)
			printf("%d, ", c++);
		printf("%d\n", c);
	}
}
