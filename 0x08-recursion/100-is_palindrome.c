#include <stdio.h>
#include "main.h"
/**
 *is_palindrome - returns a digit if a string is palindrome
 *@s: the string to be ran as the arguement
 *@x: iterator
 *@y: lenght of the string
 *Return: 0 || 1 (depends on the status quo)
 */
int checking_pal(char *s, int x, int y);
int _strlen_recur(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checking_pal(s, 0, _strlen_recur(s)));
}
/**
 * _strlen_recur - returns the length string
 * @s: string to calculate the length
 * Return: length of the string
 */

int _strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recur(s + 1));
}
/**
 * checking_pal - checks the characters for palindrome
 * @s: string to check
 * @x: iterator
 * @y: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int checking_pal(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (checking_pal(s, x + 1, y - 1));
}
