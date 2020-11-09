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
	ssize_t n_chars;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	/*Read file*/

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	/*Allocate memory*/
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	n_chars = read(fd, buf, letters);

	if (n_chars < 0)
	{
		free(buf);
		return (0);
	}

	n_chars = write(STDOUT_FILENO, buf, n_chars);

	if (n_chars < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (n_chars);
}
