#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number to allocate memory for
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
