#include "holberton.h"
/**
 * print_line - Writes a line n times
 *
 * @n: the number of lines we should print
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
