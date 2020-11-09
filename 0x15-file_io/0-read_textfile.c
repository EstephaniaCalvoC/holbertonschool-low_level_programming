#include "holberton.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard output.
 * @filename: File name.
 * @letters:The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*File descriptor*/
	ssize_t read_chars;
	ssize_t w_error;/*Write error*/
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	/*Allocate memory*/
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	/*Read file*/

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	read_chars = read(fd, buf, letters);

	if (read_chars < 0)
	{
		free(buf);
		return (0);
	}

	close(fd);

	buf[read_chars] = '\0';

	w_error = write(1, buf, (read_chars));

	if (w_error < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);

	return (w_error);
}
