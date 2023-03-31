#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @x: pointer
 *
 * Return: x
 */
char *string_toupper(char *x)
{
	int a;

	a = 0;
	while (x[a] != '\0')
	{
		if (x[a] >= 'a' && x[a] <= 'z')
			x[a] = x[a] - 32;
		a++;
	}
	return (x);
}

