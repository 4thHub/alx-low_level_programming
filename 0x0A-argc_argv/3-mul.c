#include <stdio.h>
#include "main.h"
/**
 *_atoi - function to covert string to number
 *@s: The string to be converted to number
 *Return: y, the number gotten from the conversion
 */
int _atoi(char *s)
{
	int i = 0;
	int x = 0;
	int y = 0;
	int len = 0;
	int z = 0;
	int tom = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && z == 0)
	{
		if (s[i] == '-')
			++x;
		if (s[i] >= '0' && s[i] <= '9')
		{
			tom = s[i] - '0';
			if (x % 2)
				tom = -tom;
			y = y * 10 + tom;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}
	if (z == 0)
	{
		return (0);
	}
	return (y);
}
/**
 * main - point of entry
 *description: Print the multiple of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int mul;
	int input1;
	int input2;

	if (argc == 3)
	{
		input1 = _atoi(argv[1]);
		input2 = _atoi(argv[2]);
		mul = input1 * input2;
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
