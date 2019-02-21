#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: one of the strings to compare
 * @s2: the other string to compare
 *
 * Return: difference in length
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] || s2[i] == '\0')
			break;
		else
			i++;
	}

	return (s1[i] - s2[i]);
}
