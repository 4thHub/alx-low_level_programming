#include <stdio.h>
/**
 *main - point of entry
 *Description - print first 50 nfibonacci numbers starting with 1
 *Return: 0 always
 */
int main(void)
{
	int count;
	unsigned long one = 0, two = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = one + two;
		printf("%lu", sum);

		one = two;
		two = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
