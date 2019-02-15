#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: the number of times \ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar(92);
					_putchar('\n');
				}
				if (j != 1)
					_putchar(' ');
			}
		}

	}
}
