#include <stdio.h>
#include "main.h"
/**
 *_strspn - highlight lenght of prefix substring
 *@s: To be searched
 *@accept: To be weighed
 *Return: No. of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			} else if (accept[i + 1] == 0)
				return (x);
		}
		s++;
	}
	return (x);
}
