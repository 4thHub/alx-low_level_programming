#include "main.h"
/**
 * _strncpy - copy a string
 * @gift: input value
 * @vvm: input value
 * @x: input value
 *
 * Return: gift
 */
char *_strncpy(char *gift, char *vvm, int x)
{
	int a;

	a = 0;
	while (a < x && vvm[a] != '\0')
	{
		gift[a] = vvm[a];
		a++;
	}
	while (a < x)
	{
		gift[a] = '\0';
		a++;
	}

	return (gift);
}
