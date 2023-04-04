#include <stdio.h>
#include "main.h"
/**
 *_memcpy - function that copies from memory area
 *@dest: area of the memory
 *@src: bytes from memory
 *@n: number the function copies
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int v = n;

	for (i = 0; i < v; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
