#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the digit we need to find the last number of
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;

	last = n % 10;
	_putchar('0' + last);
	return (last);
}
