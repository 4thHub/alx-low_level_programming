#include <stdio.h>
#include "main.h"

int namemyself();

int main(void)
{
	namemyself();
	return (0);
}
int namemyself(char *argv[])
{
	printf("%s", *argv);
	return (0);
}
