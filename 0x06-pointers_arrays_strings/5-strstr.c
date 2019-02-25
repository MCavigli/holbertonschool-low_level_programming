#include <stdlib.h>
#include "holberton.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int c;
	int n = 0;

	for (c = 0; needle[c] != '\0'; c++)
	{}

	while (*haystack)
	{
		while (*needle)
		{
			if (c == n)
				return (haystack);

			else if (*haystack != *needle)
				break;

			else if (*haystack == *needle)
			{
				n++;
				break;
			}
		}
		haystack++;
	}
	return (NULL);
}
