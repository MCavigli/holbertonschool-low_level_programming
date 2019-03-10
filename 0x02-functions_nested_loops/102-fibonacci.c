#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	int counter;

	i = 1;
	j = 1;
	k = 0;

	for (counter = 0; counter < 50; counter++)
	{
		if (counter == 49)
		{
			printf("%i\n", i);
			return (0);
		}

		printf("%i, ", i);
		k = i + j;
		j = i;
		i = k;
	}
	return (0);
}
