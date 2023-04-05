#include <stdio.h>
#include "main.h"
/**
 *_puts_recursion - print a string
 *@s: The string to be printed
 *Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	putchar('\n');
}
