#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *Description: We can use putchar 3 times
 *Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n == 9)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(44);
			putchar(' ');
			n++;
		}
	}

	return (0);
}
