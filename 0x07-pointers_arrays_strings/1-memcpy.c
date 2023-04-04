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
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
