#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 *@c: the digit we need to find the last number of
 *
 *Return: value of last digit
 */

int print_last_digit(int c)
{
	int full;

	if (c < 0)
		c = c * -1;

	full = c % 10;
	_putchar('0' + full);
	return (full);
}
