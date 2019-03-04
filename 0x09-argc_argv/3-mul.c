#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if it works, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	int diff = n * m;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	printf("%i\n", diff);
	return (0);
}
