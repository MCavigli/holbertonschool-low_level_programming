#include "holberton.h"
/**
 * print_square - Prints a square, followed by a new line
 *
 * @size: defines the size of the square
 * Return: nothing
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
			if (j == size)
				_putchar('\n');
		}
	}
}
