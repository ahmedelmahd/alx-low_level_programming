#include "main.h"

/**
 * append_text_to_file - a function that adds a new text into a file
 * @filename: the file that we will add to
 * @text_content: the text that we will add to the filename
 * Return: 1 if successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int new_file, fd, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count] != '\0')
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
