#include "main.h"
/**
 *print_last_digit - display the last digit
 *@c: inputed number
 *Return: the last digit
 */
int print_last_digit(int c)
{
	int mr = c % 10;

	if (mr < 0)
	{
		mr = (-1 * mr);
	}

	_putchar(mr + '0');

	return (mr);
}
