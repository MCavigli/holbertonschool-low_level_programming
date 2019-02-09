#include <stdio.h>
/**
 *main - A program that prints all possible different combinations of 2 digits
 *
 *Description: Does not repeat digits
 *Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if ((i + j) < ('8' + '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
