#include <stdio.h>
#include "main.h"
/**
 *main - point of entry
 *description: print the number of arguement passed int the programme
 *@argc: The number of arguements
 *@argv: The array of arguements
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
