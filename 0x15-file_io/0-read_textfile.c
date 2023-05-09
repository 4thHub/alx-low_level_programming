#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tom;
	ssize_t cd;
	ssize_t x;
	ssize_t a;

	cd = open(filename, O_RDONLY);
	if (cd == -1)
		return (0);
	tom = malloc(sizeof(char) * letters);
	a = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, t);

	free(tom);
	close(cd);
	return (x);
}
