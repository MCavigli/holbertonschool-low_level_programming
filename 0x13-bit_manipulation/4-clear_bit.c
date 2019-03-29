#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to number
 * @index: place to change bit to 0
 * Return: 1 if it works, -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8 - 1;
	unsigned int mask = 1;

	if (index > bit)
		return (-1);

	*n = *n & ~(mask << index);
	return (1);
}
