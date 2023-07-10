#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, fd, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		count  = 0;
		while (text_content[count])
		{
			count++;
		}
		new_file = write(fd, text_content, count);
		if (new_file == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
