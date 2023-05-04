#include <stdio.h>
#include "main.h"
/**
 *flip_bits - counts the number of bits to change
 *to get from one number to another
 *@n: first number
 *@m: second number
 *Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, track = 0;
	unsigned long int wave;
	unsigned long int uniq = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		wave = uniq >> x;
		if (wave & 1)
			track++;
	}
	return (track);
}
