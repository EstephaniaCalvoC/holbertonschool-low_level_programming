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
	int read_chars;
	int w_error;/*Write error*/
	char buf[letters + 1];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_chars = read(fd, buf, letters);

	buf[letters] = '\0';

	close(fd);

	w_error = write(1, &(buf[0]), (read_chars));

	if (w_error == -1)
		return (0);

	return (w_error);
}
