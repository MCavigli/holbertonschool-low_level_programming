#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: the argument counter
 * @argv: the array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{

	int c;
	int (*p)(int, int);
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	oper = argv[2];
	p = get_op_func(oper);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = (*p)(a, b);

	printf("%d\n", c);
	return (0);
}
