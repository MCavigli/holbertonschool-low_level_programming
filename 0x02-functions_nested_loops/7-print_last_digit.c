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
	int last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar('0' + last);
	return (last);
}
