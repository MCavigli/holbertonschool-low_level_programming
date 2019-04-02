#include "holberton.h"

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int ffrom, fto, rd, wr, clf, clt;
	char *buff = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		free(buff);
		exit(97);
	}
	if (buff == NULL)
		return (-1);
	ffrom = open(argv[1], O_RDWR);
	if (ffrom == -1)
	{
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(ffrom, buff, 1024);
	if (rd == -1)
	{
		free(buff);
		close(ffrom && fto);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = write(fto, buff, rd);
	if (wr == -1)
	{
		free(buff);
		close(ffrom && fto);
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}

	clf = close(ffrom);
	clt = close(fto);
	if (clf == -1 || clt == -1)
	{
		free(buff);
		if (clf == -1)
			dprintf(2, "Error: Can't close fd %d\n", ffrom);
		else if (clt == -1)
			dprintf(2, "Error: Can't close fd %d\n", fto);
		exit(100);
	}
	free(buff);
	close(ffrom && fto);
	return (0);
}
