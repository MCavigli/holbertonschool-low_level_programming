#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * chk_char - prints the char character
 * @list: the type
 * Return: nothing
 */
void chk_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * chk_int - prints the int
 * @list: the type
 * Return: nothing
 */
void chk_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * chk_float - prints the float
 * @list: the type
 * Return: nothing
 */
void chk_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * chk_string - prints the string
 * @list: the type
 * Return: nothing
 */
void chk_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	check_t types[] = {
		{"c", chk_char},
		{"i", chk_int},
		{"f", chk_float},
		{"s", chk_string},
		{NULL, NULL}
	};

	int x = 0, y = 0;
	va_list list;
	char *sep = "";

	va_start(list, format);

	while (format && format[x])
	{
		while (types[y].chk)
		{
			if (format[x] == *types[y].chk)
			{
				printf("%s", sep);
				types[y].f(list);
				sep = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(list);
}
