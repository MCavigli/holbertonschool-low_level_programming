#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - hold all the code
 *
 *Description: Code finds that last number in an int and prints it
 *out. It also denotes if this number is great than 5, is zero,
 *or if it is less than 6.
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of ");
	if (n % 10 > 5)
		printf("%d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("%d is %d and is 0\n", n, n % 10);
	else if ((n % 10 < 6) && (n % 10 != 0))
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
