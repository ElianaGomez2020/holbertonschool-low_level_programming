#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename:  name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, n;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	n = write(fd, text_content, i);
	if (n == -1)
		return (-1);
	return (1);
}
