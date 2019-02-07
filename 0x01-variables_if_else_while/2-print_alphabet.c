#include <stdio.h>
/**
 *main - print the alphabet in lowercase
 *
 *return: 0
 */
int main(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
