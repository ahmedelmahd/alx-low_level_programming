#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to stdout
 * @filename: the file that we will read from
 * @letters: the number of letters are in the file
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t actual_letters, written;
	ssize_t file_pointer;
	char *buffer;

	file_pointer = open(filename, O_RDONLY);
	if (file_pointer == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	actual_letters = read(file_pointer, buffer, letters);
	written = write(STDOUT_FILENO, buffer, actual_letters);

	free(buffer);
	close(file_pointer);
	return (written);
}
