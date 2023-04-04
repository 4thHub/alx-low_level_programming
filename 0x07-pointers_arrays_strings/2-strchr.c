#include "main.h"
/**
 * _strchr - point of entry
 * @s: to be searched
 * @c: to be located
 * Return: Null or a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}

