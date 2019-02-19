#include "holberton.h"
/**
 * puts2 - prints one character out of two, starting with the first
 *
 * @str: the string to look at
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = _strlen(str) - 1;

	while (i <= len)
	{
		_putchar(str[i]);
		i+=2;
	}

	_putchar('\n');
}
#include "holberton.h"
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
