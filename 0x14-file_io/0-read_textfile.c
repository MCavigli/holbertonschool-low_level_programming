#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: name of the file that's read
 * @letters: the number of letters read and printed
 *
 * Return: the actual  number of letters read and printed, 0 if file cannot be
 * opened or read, 0 if @filename is NULL, 0 if write fails or doesn't write
 * the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	free(buff);
	return (wr);
}
