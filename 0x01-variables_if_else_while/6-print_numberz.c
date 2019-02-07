#include <stdio.h>
/**
 *main - prints numbers
 *
 *Description: Prints 0-10 using putchar function and no char variables
 *Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}

	putchar('\n');
	return (0);
}
