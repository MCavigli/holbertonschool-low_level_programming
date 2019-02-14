#include "holberton.h"
/**
 * print_numbers - Prints numbers 0 through 9, followed by a new line
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n + '0');

	_putchar('\n');
}
