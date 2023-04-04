#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - locates a string for a byte
 *@s: To be searched
 *@accept: To be searched for
 *Return: Null or a pointer to match the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
