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

conv_t func_spec(char c)
{
	func_t prints[] = {
		{'c', charconv},
		{'s', strconv},
		{'%', moduconv},
		{'d', intconv},
		{'i', intconv},
		{'b', binconv},
		{'u', unsconv},
		{'o', octconv},
		{'x', hexconv},
		{'X', uphexconv},
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
