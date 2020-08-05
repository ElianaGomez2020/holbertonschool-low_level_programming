#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content:  is the NULL 
 * Return: 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc = 0, lenght = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[lenght])
		{
			lenght++;
		}
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc < 0)
		return (-1);

	write(file_desc, text_content, lenght);

	return (1);
}