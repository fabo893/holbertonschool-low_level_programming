#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: NULL terminated string
 * Return: On success, always 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	if (!filename)
		return (-1);

	fd = open(filename, 0_WRONLY | 0_TRUNC | 0_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
