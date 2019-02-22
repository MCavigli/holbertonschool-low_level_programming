#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @z: letters to check
 * Return: uppercase letters
 */

char *string_toupper(char *z)
{
	int i;

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] >= 97 && z[i] <= 122)
			z[i] -= 32;
	}

	return (z);
}
