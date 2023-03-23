#include <stdio.h>
/**
 *main - point of entry
 *Description - find and display the sum of the even valued terms
 *Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long int a, b, next, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
