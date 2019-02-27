#include "holberton.h"

/**
 * helper - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

int helper(int a, int b)
{
	if (b * b == a)
		return (b);

	if (a == 1)
		return (1);

	if (b * b < a)
		return (-1);

	else
		return (helper(a, b - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	return (helper(n, n - 1));
}
