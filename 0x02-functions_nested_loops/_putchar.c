#include "main.h"
#include <unistd.h>
/**
  *_puchar - writes c to stdout
  *@c: print c
  *Return: 1 on success
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
