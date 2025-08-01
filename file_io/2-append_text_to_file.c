#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - Appends text to an existing file.
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_length > 0)
	{
		written_bytes = write(fd, text_content, text_length);
		if (written_bytes == -1 || written_bytes != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
