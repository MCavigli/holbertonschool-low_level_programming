#include <stdio.h>
/**
 *main - prints 00-99
 *
 *Description: We can only use putchar function
 *Return: 0
 */
int main(void)
{
	int n;
	int z;

	for (n = 0; n <= 9; n++)
	{
		z = 0;
		for (z = 0; z <= 9; z++)
		{
			putchar('0' + n);
			putchar('0' + z);
			if (n == 9 && z == 9)
			{
				putchar('\n');
			}
			else
			{
			putchar(44);
			putchar(' ');
			}
		}
	}

	return (0);
}
