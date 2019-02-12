#include "holberton.h"
/**
 *print_alphabet - prints the alphabet
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
