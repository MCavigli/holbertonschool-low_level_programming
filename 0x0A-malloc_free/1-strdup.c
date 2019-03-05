#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *ar;
	int i = 0;
	int j = 0;


	while (str[i])
		i++;

	ar = malloc(sizeof(char) * (i + 1));
	if (i == 0 || str == NULL)
		return (NULL);

	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);
}
