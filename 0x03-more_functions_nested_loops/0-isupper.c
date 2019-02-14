#include "holberton.h"
/**
 * _isupper - checks for an uppercase character
 *
 * @c: the character to check
 *
 * Return: 1 ic @c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
