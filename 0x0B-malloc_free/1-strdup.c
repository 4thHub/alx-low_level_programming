#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns pointer to newly allocated space
 *@str: string inputed
 *Return: NULL || ptr
 */
char *_strdup(char *str)
{
	int i = 0;
	int x = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[x] != 0)
		x++;
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
