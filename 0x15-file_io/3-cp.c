#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *new_buffer(char *file);
void close_file(int fd);

/**
 * new_buffer - a function that allocates buffer auto for the file given
 * @file: the name of the file buffer is creating memory to
 * Return: a pointer to the newly allocated memory
 */
char *new_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - a function that closes the newly opened file
 * @fd: the file descriptor to be closed
 * Return: Void
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of file 1 to file 2
 * @argc: the argument counts
 * @argv: the array of arguments in main
 * Return: 0 if successful
 * exit codes :
 * if argument count is incorrect - exit code 97
 * if file_from does not exist or cannot be read - exit code 98
 * if file_to cannot be created or written - exit 99
 * if file_to or file_from cannot be closed - exit 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, reading, writing;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n");
		exit(97);
	}
	buffer = new_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: cna't read from %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		free(buffer);
		close_file(file_from);
		exit(99);
	}
	do {
		reading = read(file_from, buffer, 1024);
		if (reading == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
			free(buffer);
			close_file(file_from);
			close_file(file_to);
			exit(98);
		}
		writing = write(file_to, buffer, reading);
		if (writing  == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			close_file(file_from);
			close_file(file_to);
			exit(99);
		}
	} while (reading > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
