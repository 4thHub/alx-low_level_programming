#include <stdio.h>
#include "main.h"
/**
 *main - point of entry
 *description: print the name of the programm
 *@argc: blank paremeter, not used
 *@argv: the array of arguments
 *Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
