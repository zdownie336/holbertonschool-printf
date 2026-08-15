#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * func_spec - choosing the correct function for printf.
 * @c: char to compare
 *
 * 
 * Return: pointer to function to use
 */

char *(*func_spec(char c))(va_list *arg, char *buff)
{
	func_t prints[] = {
		{'c', charconv},
		{'s', strconv},
		{'%', moduconv},
		{'d', intconv},
		{'i', intconv},
		/*
		{'b', convert(va_arg(*arg, int), 2)},
		{'u', convertu(va_arg(*arg, long int), 10)},
		{'o', convert(va_arg(*arg, int), 8)},
		{'x', convert(va_arg(*arg, int), 16)},
		{'X', convupp(va_arg(*arg, int), 16)},
		*/
		{'\0', NULL}};
	int i;

	i = 0;
	while (prints[i].arg != '\0')
	{
		if (c == prints[i].arg)
		{
			return (prints[i].f);
		}
		i += 1;
	}
	return (NULL);
}
