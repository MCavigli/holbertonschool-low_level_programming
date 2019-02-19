#include "holberton.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int len;
	char newStr;

	i = 0;
	len = _strlen(s) - 1;

	while (len >= i)
	{
		newStr = s[len]; /*newStr == n*/
		s[len] = s[i]; /*s[len] == H*/
		s[i] = newStr; /*s[i] == n*/
		len--;
		i++;
	}
}
/**
 * _strlen - returns the length of a string
 *
 * @s: the string whose length to return
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
