#include <stdio.h>
#ifndef __BASE_FILE__
#define __BASE_FILE__
#endif
/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
