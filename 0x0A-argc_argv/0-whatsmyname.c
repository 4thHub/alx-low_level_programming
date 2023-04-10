#include <stdio.h>
#include "main.h"
/**
 *main - point of entry
 *@argc: the total  number of arguments
 *@argv: the array of arguments
 */
int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
