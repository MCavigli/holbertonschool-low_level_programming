#include "holberton.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: the number of elements
 * @size: the size of that element type
 *
 * Return: A pointer to the allocated memeory. NULL if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	_memset(ar, 0, (size * nmemb));

	return (ar);
}
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
