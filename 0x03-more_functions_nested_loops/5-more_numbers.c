#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers 0 - 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');

			if (j == 9)
			{
				for (k = 0; k <= 4; k++)
				{
					_putchar('1');
					_putchar(k + '0');
				}
			}

		}


		_putchar('\n');
	}
}
