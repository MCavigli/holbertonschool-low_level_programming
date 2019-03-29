#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	int count = 0;

	if (!n || !m)
		return (-1);
	while (xor)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
