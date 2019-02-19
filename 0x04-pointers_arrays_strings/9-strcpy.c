#include "holberton.h"

/**
 * *_strcpy - copies a string including the null to a buffer
 *
 * @dest: buffer
 * @src: Points to string
 *
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
