#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char
 *
 * @size: size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	*str = c;
	return (str);
}
