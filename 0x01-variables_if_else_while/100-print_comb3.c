#include <stdio.h>
/**
 *main - prints possible diffrent combinations of 2 digits
 *Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 47; m <= 56; m++)
	{
		if (m > n)
		{
			putchar (n);
			putchar (n);
			if (n != 56 || m != 57)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
