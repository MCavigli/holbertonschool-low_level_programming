#include <stdio.h>
/**
 *main - print single digit numbers and letters a-f
 *
 *Description: Use putchar to print single digit numbers followed by a-f
 *Return: 0
 */
int main(void)
{
	int n = 0;
	int l = 'a';

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
