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
	int sum1 = 0; /* sume of s1's ASCII values */
	int sum2 = 0; /* sum of s2's ASCII values */
	int i, j; /* counter for s1 and s2 */

	for (i = 0; s1[i]; i++)
		sum1 += s1[i];

	for (j = 0; s2[j]; j++)
		sum2 += s2[j];

	if (sum1 == sum2)
		return (0);
	else if (sum1 < sum2)
		return (sum1 - sum2);
	else
		return (sum2 - sum1);

}
