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
	if (a == 0)
		return (0);

	else if (a == 1)
		return (1);

	else if (b * b < a || a < 0)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b - 1));

	return (1);
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
