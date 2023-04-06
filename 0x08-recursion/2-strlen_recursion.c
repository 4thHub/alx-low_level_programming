#include <stdio.h>
#include "main.h"
/**
 *_strlen_recursion - print the lenght of a string
 *@s: the string to be counted
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != 0)
	{
		lenght += _strlen_recursion(s + 1);
		lenght++;
	}
	return (lenght);
}
