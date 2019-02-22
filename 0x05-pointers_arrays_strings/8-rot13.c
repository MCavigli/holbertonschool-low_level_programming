#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @z: the string to encode
 *
 * Return: the new string
 */

char *rot13(char *z)
{
	int i, j;
	char a[] = "abcdefghijklmABCDEFGHIJKLM";
	char n[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; j < 28; j++)
		{
			if (z[i] == a[j])
				z[i] = n[j];

			else if (z[i] == n[j])
				z[i] = a[j];
		}
	}

	return (z);
}
