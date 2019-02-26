#include "holberton.h"
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: The pointer to change
 * @to: The value to change the pointer to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
