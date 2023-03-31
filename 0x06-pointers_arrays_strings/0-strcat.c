#include "main.h"
/**
 * _strcat - concatenates two strings
 * @gift: input value
 * @vvm: input value
 *
 * Return: void
 */
char *_strcat(char *gift, char *vvm)
{
	int a;
	int b;

	a = 0;
	while (gift[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (vvm[b] != '\0')
	{
		gift[a] = vvm[b];
		a++;
		b++;
	}

	gift[a] = '\0';
	return (gift);
}
