#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: the integer where the count will begin
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%i\n", n);

	while (n > 98)
	{
		printf("%i, ", n);
		if (n == 99)
		{
			n--;
			printf("%i\n", n);
		}
		else
			n--;
	}

	while (n < 98)
	{
		printf("%i, ", n);
		if (n == 97)
		{
			n++;
			printf("%i\n", n);
		}
		else
			n++;
	}
}
