#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Tell if the figure is positive, zero, or negative
  *Return: Always 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANO_MAX / 2;
	if (n > 0)
	{
		printf(n, "%d is positive\n");
	}
	else if (n == 0)
	{
		printf(n, "%d is zero\n");
	}
	else
	{
		printf(n, "%d is negative\n");
	}
	return (0);
}
