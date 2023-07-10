#include "main.h"

/**
 * append_text_to_file - a function that appends a new text to a file
 * @filename: the name of the file that we're gonna append to
 * @text_content: the text that we're gonna append
 * Return: (1) if successful, (-1) otherwise
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
