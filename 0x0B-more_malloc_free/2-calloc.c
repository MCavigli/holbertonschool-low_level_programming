#include "holberton.h"
#include <stdlib.h>

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
	void *ar = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc((size * nmemb) + 1);
	if (ar == NULL)
		return (NULL);

	return (ar);
}
