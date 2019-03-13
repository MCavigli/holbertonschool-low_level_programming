#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function to send the name to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
