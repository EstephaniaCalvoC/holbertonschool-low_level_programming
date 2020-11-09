#include "holberton.h"

/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: File name.
 * @text_content: Text content to write.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_chars;

	if (filename == NULL)
		return (-1);

	/*Create file*/
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	/*Write*/

	if (text_content != NULL)
	{
		n_chars = _strlen(text_content);
		write(fd, text_content, n_chars);
	}
	close(fd);
	return (1);
}
