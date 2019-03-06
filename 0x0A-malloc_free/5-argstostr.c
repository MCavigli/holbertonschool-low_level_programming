#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: counter of arguments
 * @av: vector of arguments
 *
 * Return: pointer to a new string, or NULL if it fails. Returns NULL
 * if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	int j;
	int k;
	int n;
	int m;
	int counter = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i <= ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{}
		counter += j;
	}
	counter += ac;     /* To account for \n */

	ar = malloc(sizeof(char) + counter + 1);
	if (ar == NULL)
		return (NULL);

	while (k <= counter)
	{
		for (n = 0; n < ac; n++)
		{
			for (m = 0; av[n][m] != '\0'; m++)
			{
				ar[k] = av[n][m];
				k++;
			}
		}
		ar[k + 1] = '\0';
	}
	return (ar);
}
