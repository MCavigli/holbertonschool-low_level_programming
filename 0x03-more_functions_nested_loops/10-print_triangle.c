#include "holberton.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: the size of the triangle to print
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
			{
				_putchar(35);
				if (j == size)
					_putchar('\n');
			}
		}
	}
}
