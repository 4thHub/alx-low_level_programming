#include <stdio.h>
#include "main.h"
/**
 *main - point of entry
 *description: print all the arguement the programm recieves
 *@argc: The number of arguements
 *@argv: The array of the arguement
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

