#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buff(char *page);
void shut_file(int cd);

/**
 * make_buff - Allocates 1024 bytes for a buffer.
 * @page: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *make_buff(char *page)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", page);
		exit(99);
	}

	return (buff);
}

/**
 * shut_file - Closes file descriptors.
 * @cd: The file descriptor to be closed.
 */
void shut_file(int cd)
{
	int x;

	x = close(cd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int coming, through, a, x;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buff(argv[2]);
	through = open(argv[1], O_RDONLY);
	a = read(coming, buff, 1024);
	through = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (coming == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		x = write(through, buff, a);
		if (through == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		a = read(coming, buff, 1024);
		through = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buff);
	shut_file(coming);
	shut_file(through);

	return (0);
}
