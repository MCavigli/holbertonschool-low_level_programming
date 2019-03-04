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
	int c;
	int n = 0;

	if (argc < 2)
		printf("0\n");

	else
	{
		for (c = 1; c < argc; c++)
		{
			if (*argv[c] < '0' || *argv[c] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				n = n + atoi(argv[c]);
		}
		printf("%d\n", n);
	}
	return (0);
}
