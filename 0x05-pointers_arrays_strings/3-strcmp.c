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
	int lens1; /* string length for s1 */
	int lens2; /* string length for s2 */

	lens1 = 0;
	lens2 = 0;

	while (s1[lens1] != '\0')
		lens1++;

	while (s2[lens2] != '\0')
		lens2++;

	if (lens1 == lens2)
		return (0);
	else if (lens1 < lens2)
		return (-15);
	else
		return (15);
}
