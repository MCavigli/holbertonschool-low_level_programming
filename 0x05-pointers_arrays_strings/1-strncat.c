#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0; /* string length for src */
	int len2 = 0; /* string length for dest */
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
