#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @z: the string to look at
 *
 * Return: the capitalized string
 */

char *cap_string(char *z)
{
	int i = 0;
	int j = 0;
	char badBoys[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(',
			  ')', '{', '}'};

	if (z[0] >= 'a' && z[0] <= 'z')
		z[0] -= 32;

	for (; z[i] != '\0'; i++)
	{
		for (; j < 13; j++)
		{
			if (z[i] == badBoys[j])
			{
				if (z[i + 1] >= 'a' && z[i + 1] <= 'z')
					z[i + 1] -= 32;
			}
		}
	}

	return (z);
}
