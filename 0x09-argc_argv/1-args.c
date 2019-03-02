#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c;
	(void)argv;

	for (c = 0; c <= argc; c++)
	{}
	printf("%d\n", c - 2);

	return (0);
}
