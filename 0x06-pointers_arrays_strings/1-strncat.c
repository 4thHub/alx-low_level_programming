#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @gift: input value
 * @vvm: input value
 * @x: input value
 *
 * Return: gift
 */
char *_strncat(char *gift, char *vvm, int x)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < x && vvm[b] != '\0')
	{
	gift[a] = vvm[b];
	a++;
	b++;
	}
	gift[a] = '\0';
	return (gift);
}

