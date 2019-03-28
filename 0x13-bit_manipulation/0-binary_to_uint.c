#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more characters in
 * string @b that is not 0 or 1, or @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;
	int power = 0;

	if (b == '\0')
		return (0);

	while (b[i + 1])
	{
		i++;
	}

	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n = n + (b[i] * (2 << power));
			i--;
			power++;
		}
		else
			return (0);
	}
	return (n);


}
