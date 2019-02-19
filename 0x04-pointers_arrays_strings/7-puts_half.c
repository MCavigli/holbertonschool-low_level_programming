#include "holberton.h"
/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: The string to print half of
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len;
	int j;
	char newStr;

	len = _strlen(str);

	if (len % 2 ==  0)
	{
		for (j = len / 2; j < len; j++)
		{
			newStr = str[j];
			_putchar(newStr);
		}
	}
	else
	{
		for (j = (len -1) / 2; j < len; j++)
		{
			newStr = str[j];
			_putchar(newStr);
		}
	}
	_putchar('\n');
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
