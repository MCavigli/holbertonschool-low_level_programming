#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed
 */

int main(int argc, char *argv[])
{
	int c, d;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[c]);
	}
	printf("%d\n", n);
	return (0);
}
