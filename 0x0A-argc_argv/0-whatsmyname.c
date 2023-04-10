#include <stdio.h>
#include "main.h"

int main(int nameprint __attribute((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
